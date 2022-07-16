#include <iostream>

int main()
{
    while (true)
    {
        int age;
        int payment;
        int distance;
        std::cout << "나이를 입력하세요 : ";
        std::cin >> age;

        std::cout << "결제 수단을 입력하세요 ( 0 : 교통카드, 1 : 일반 ) : ";
        std::cin >> payment;

        std::cout << "거리를 입력하세요 : ";
        std::cin >> distance;

        if (payment == 0)
        {
            if (distance < 10)
            {
                if (age < 6)
                {
                    std::cout << "Free\n";
                }
                else if (age >= 6 && age < 13)
                {
                    std::cout << "450 WON\n";
                }
                else if (age >= 13 && age <= 18)
                {
                    std::cout << "720 WON\n";
                }
                else if (age > 19)
                {
                    std::cout << "1250 WON\n";
                }
            }
            else if (distance < 15)
            {
                if (age < 6)
                {
                    std::cout << "Free\n";
                }
                else if (age >= 6 && age < 13)
                {
                    std::cout << "500 WON\n";
                }
                else if (age >= 13 && age <= 18)
                {
                    std::cout << "800 WON\n";
                }
                else if (age > 19)
                {
                    std::cout << "1350 WON\n";
                }
            }
            else if (distance < 20)
            {
                if (age < 6)
                {
                    std::cout << "Free\n";
                }
                else if (age >= 6 && age < 13)
                {
                    std::cout << "550 WON\n";
                }
                else if (age >= 13 && age <= 18)
                {
                    std::cout << "880 WON\n";
                }
                else if (age > 19)
                {
                    std::cout << "1450 WON\n";
                }
            }
            else
            {
                std::cout << "잘못된 거리입니다.\n";
            }
        }
        else if (payment == 1)
        {
            if (distance < 10)
            {
                if (age < 6)
                {
                    std::cout << "Free\n";
                }
                else if (age < 13 && age >= 6)
                {
                    std::cout << "450 WON\n";
                }
                else if (age >= 13)
                {
                    std::cout << "1350 WON\n";
                }
            }
            else if (distance < 15)
            {
                if (age < 6)
                {
                    std::cout << "Free\n";
                }
                else if (age < 13 && age >= 6)
                {
                    std::cout << "500 WON\n";
                }
                else if (age >= 13)
                {
                    std::cout << "1450 WON\n";
                }
            }
            else if (distance < 20)
            {
                if (age < 6)
                {
                    std::cout << "Free\n";
                }
                else if (age < 13 && age >= 6)
                {
                    std::cout << "550 WON\n";
                }
                else if (age >= 13)
                {
                    std::cout << "1550 WON\n";
                }
            }
            else
            {
                std::cout << "잘못된 거리입니다.\n";
            }
        }
        else
        {
            std::cout << "잘못된 결제 수단입니다.\n";
        }
    }
}
