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

	Point2D operator+(Point2D rhs)
	{
		Point2D result{ 0,0 };
		result.mX = this->mX + rhs.mX;
		result.mY = this->mY + rhs.mY;

		return result;
	}

	const Point2D& operator++()
	{
		++mX;
		++mY;

		return *this;
	}

	const Point2D& operator++(int)
	{
		// 반환 후 증가
		Point2D temp(mX, mY);

		++(*this);

		return temp;
	}

	friend Point2D operator+(const Point2D& x, const Point2D& y);
};

Point2D operator+(const Point2D& x, const Point2D& y)
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

	Point2D pt5 = ++pt1;
	pt5.Print();

	Point2D pt6 = pt1++;
	pt6.Print();
}
