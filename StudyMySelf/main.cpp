#include <iostream>

int main()
{
    int inputNumber;
    std::cout << "숫자를 입력하세요 : ";
    std::cin >> inputNumber;

    int absoluteNumber;
    if (inputNumber < 0)
    {
        absoluteNumber = -inputNumber;
    }
    else
    {
        absoluteNumber = inputNumber;
    }

    std::cout << "절대값 = " << absoluteNumber;
}
