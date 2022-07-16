#include <iostream>

int main()
{
    const int USDTOWON = 1090;
    const float YENTOWON = 9.7f;
    int money{};
    char kind;

    std::cout << "달려(s)화 혹은 엔(y)화를 입력하세요 : ";
    std::cin >> money >> kind;

    if (kind == 's')
    {
        std::cout << money << "USD는 ";
        std::cout << money * USDTOWON << "원 입니다.";
    }
    else if (kind=='y')
    {
        std::cout << money << "JPY는 ";
        std::cout << money * YENTOWON << "원 입니다.";
    }
}
