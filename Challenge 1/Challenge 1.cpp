#include <iostream>

bool isLeapYear(int CurrentYear);

int main()
{
    const int kCurrentYear = 2400;


    if (isLeapYear(kCurrentYear))
    {
        std::cout << "The current year is " << kCurrentYear << " and it is a leap year!" << std::endl;
    }
    else
    {
        std::cout << "The current year is " << kCurrentYear << " and it is NOT a leap year!" << std::endl;
    }
}

bool isLeapYear(int currentYear)
{
    if (currentYear%4 == 0)
    {
        if ((currentYear%100 == 0) && (currentYear%400 != 0))
        {
            return false;
        }

       return true;
    }

    return false;
}