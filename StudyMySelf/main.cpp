#include <iostream>
#include <cmath>

class Point2D
{
private:
	int mX;
	int mY;

public:
	Point2D(int x, int y) : mX{ x }, mY{ y }{}

	operator const float()
	{
		return sqrt(mX * mX + mY * mY);
	}

	void operator() ()
	{
		mX = 0;
		mY = 0;
	}

	void operator() (int x, int y)
	{
		mX = x;
		mY = y;
	}

	void Print()
	{
		std::cout << "(" << mX << ", " << mY << ")" << std::endl;
	}

	friend std::ostream& operator << (std::ostream& os, const Point2D& pt)
	{
		os << "(" << pt.mX << ", " << pt.mY << ")" << std::endl;
		return os;
	}

	Point2D& operator=(const Point2D& instance)
	{
		mX = instance.mX;
		mY = instance.mY;
		return *this;
	}
};

int main()
{
	Point2D pt1{ 2,3 };

	std::cout << pt1;

}
