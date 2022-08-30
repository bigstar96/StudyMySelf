#include <iostream>

class Point2D
{
public:
	int mX;
	int mY;

	double Length();

	void Print();
};

double Point2D::Length()
{
	return sqrt(mX * mX + mY * mY);
}

void Point2D::Print()
{
	std::cout << "(" << mX << ", " << mY << ")" << std::endl;
}

int main()
{
	Point2D pt{ 3,3 };

	pt.Print();

	std::cout << pt.Length();
}