#include <iostream>

const char gStageData[] = "\
########\n\
# .. p #\n\
# oo   #\n\
#      #\n\
########";

const int gStageWidth = 8;
const int gStageHeight = 5;

enum Object
{
	SPACE,
	WALL,
	GOAL,
	BLOCK,
	BLOCK_ON_GOAL,
	MAN,
	MAN_ON_GOAL,

	UNKNOWN
};

void initialize(Object* s, int w, int h, const char* stageData)
{
	const char* d = stageData;
	int x = 0;
	int y = 0;

	while (*d != '\0')
	{
		Object t;

		switch (*d)
		{
		case '#':
			t = WALL;
			break;

		case ' ':
			t = SPACE;
			break;

		case '.':
			t = GOAL;
			break;

		case 'o':
			t = BLOCK;
			break;

		case 'O':
			t = BLOCK_ON_GOAL;
			break;

		case 'p':
			t = MAN;
			break;

		case 'P':
			t = MAN_ON_GOAL;
			break;

		case '\0':
			t = UNKNOWN;
			x = 0;
			y++;
			break;

		default:
			t = UNKNOWN;
			break;
		}
		++d;
		if (t != UNKNOWN)
		{
			s[y * w + x] = t;
			++x;
		}
	}
}

void Draw(const Object* s, int w, int h)
{
	const char font[] = { ' ', '#', '.', 'o', 'O', 'p', 'P' };
	for (int y = 0; y < h; ++y)
	{
		for (int x = 0; x < w; ++x)
		{
			Object o = s[y * w + x];
			std::cout << font[o];
		}
		std::cout << std::endl;
	}
}

void Update(Object* s, char input, int w, int h)
{
	int dx = 0;
	int dy = 0;

	switch (input)
	{
	case 'a':
		dx = -1;
		break;

	case 'd':
		dx = 1;
		break;

	case 'w':
		dy = -1;
		break;

	case 's':
		dy = 1;
		break;
	}

	int i = -1;
	for (i = 0; i < w * h; ++i)
	{
		if (s[i] == MAN || s[i] == MAN_ON_GOAL)
		{
			break;
		}
	}

	int x = i % w;
	int y = i / w;

	int tx = x + dx;
	int ty = y + dy;

	if (tx < 0 || ty < 0 || tx >= w || ty >= h)
	{
		return;
	}

	int p = y * w + x;
	int tp = ty * w + tx;

	if (s[tp] == SPACE || s[tp] == GOAL)
	{
		s[tp] = (s[tp] == GOAL) ? MAN_ON_GOAL : MAN;
		s[p] = (s[p] == MAN_ON_GOAL) ? GOAL : SPACE;
	}
	else if (s[tp] == BLOCK || s[tp] == BLOCK_ON_GOAL)
	{
		int tx2 = tx + dx;
		int ty2 = ty + dy;
		if (tx2 < 0 || ty2 < 0 || tx2 >= w || ty2 >= h)
		{
			return;
		}

		int tp2 = (ty + dy) * w + (tx + dx);
		if (s[tp2] == SPACE || s[tp2] == GOAL)
		{
			s[tp2] = (s[tp2] == GOAL) ? BLOCK_ON_GOAL : BLOCK;
			s[tp] = (s[tp] == BLOCK_ON_GOAL) ? MAN_ON_GOAL : MAN;
			s[p] = (s[p] == MAN_ON_GOAL) ? GOAL : SPACE;
		}
	}
}

bool CheckClear(const Object* s, int w, int h)
{
	for (int i = 0; i < w * h; ++i)
	{
		if (s[i] == BLOCK)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	Object* s = new Object[gStageWidth * gStageHeight];

	initialize(s, gStageWidth, gStageHeight, gStageData);

	while (true)
	{
		Draw(s, gStageWidth, gStageHeight);

		if (CheckClear(s, gStageWidth, gStageHeight))
		{
			break;
		}

		std::cout << "a:left d:right w:up s:dwon. command?" << std::endl;
		char input;
		std::cin >> input;

		Update(s, input, gStageWidth, gStageHeight);

	}

	std::cout << "Congratulations! you win." << std::endl;

	delete[] s;
	s = 0;

	while (true)
	{

	}

	return 0;
}