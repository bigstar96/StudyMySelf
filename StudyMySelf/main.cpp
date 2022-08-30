#include <iostream>

//class Point2D
//{
//private:
//	int mX;
//	int mY;
//
//public:
//	void Set(int x, int y);
//	double Length();
//	void Print();
//};
//
//void Point2D::Set(int x, int y)
//{
//	mX = x;
//	mY = y;
//}
//
//double Point2D::Length()
//{
//	return sqrt(mX * mX + mY * mY);
//}
//
//void Point2D::Print()
//{
//	std::cout << "(" << mX << ", " << mY << ")" << std::endl;
//}

class MyClass
{
public:
	MyClass()
	{
		std::cout << "[Constructor]" << std::endl;
	}
	~MyClass()
	{
		std::cout << "[Destructor]" << std::endl;
	}

private:

};

int main()
{
	/*Point2D pt;

	pt.Set(3, 3);
	pt.Print();

	std::cout << pt.Length();*/

	MyClass c1;

	std::cout << "MyClass Instantiate!" << std::endl;
}