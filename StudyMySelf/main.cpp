#include <iostream>

class Point2D
{
private:
	int mX{};
	int mY{};

public:
	Point2D() = default;
	Point2D(int x, int y) : mX{ x }, mY{ y } {}

	void Print()
	{
		std::cout << "(" << mX << ", " << mY << ")" << std::endl;
	}

	friend Point2D operator+(Point2D& x, Point2D& y);
};

Point2D operator+(Point2D& x, Point2D& y)
{
	Point2D newPt{ 0,0 };

	newPt.mX = x.mX + y.mX;
	newPt.mY = x.mY + y.mY;

	return newPt;
}


int main()
{
	Point2D pt1{ 2,3 }, pt2{ 4,5 };
	pt1.Print();
	pt2.Print();

	Point2D pt3 = pt1 + pt2;
	pt3.Print();

	Point2D pt4 = pt1 + pt2 + pt3;
	pt4.Print();
}
