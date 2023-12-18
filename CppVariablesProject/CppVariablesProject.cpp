#include <iostream>

int main()
{
    /*int a{ 10 };
    int b{ 20 };

    {
        int c{ 30 };
        int a{ 40 };

        std::cout << a << " " << b << " " << c << "\n";
    }*/

    /*int x;
    std::cout << "input x: ";
    std::cin >> x;*/

    /*if (x < 0)
        x = -x;
    std::cout << "abs = " << x << "\n";*/

    /*if (x % 2 == 0)
        std::cout << "number is even\n";
    else
        std::cout << "number is odd\n";

    std::cout << "program final\n";*/

    /*float a, b, c;
    std::cout << "input a, b, c: ";
    std::cin >> a >> b >> c;

    float d{ b * b - 4 * a * c };*/

    /*if (d > 0)
    {
        std::cout << "x1 = " << -(b + sqrt(d)) / (2 * a) << "\n";
        std::cout << "x2 = " << -(b - sqrt(d)) / (2 * a) << "\n";
    }
    else
    {
        if (d == 0)
            std::cout << "x = " << -b / (2 * a) << "\n";
        else
            std::cout << "not roots\n";
    }*/

    /*if (d >= 0)
    {
        if (d == 0)
            std::cout << "x = " << -b / (2 * a) << "\n";
        else
        {
            std::cout << "x1 = " << -(b + sqrt(d)) / (2 * a) << "\n";
            std::cout << "x2 = " << -(b - sqrt(d)) / (2 * a) << "\n";
        }
    }
    else
        std::cout << "not roots\n";*/

    /*
    int day;
    std::cout << "input number of week day: ";
    std::cin >> day;

    if (day == 1)
    {
        std::cout << "Monday\n";
    }
    else if(day == 2)
        std::cout << "Tuesday\n";
    else if(day == 3)
        std::cout << "Wednesday\n";
    else if(day == 4)
        std::cout << "Thursday\n";
    else if(day == 5)
        std::cout << "Friday\n";
    else if(day == 6)
        std::cout << "Saturday\n";
    else if(day == 7)
        std::cout << "Sunday\n";
    else
        std::cout << "Incorrect number of week day!!!\n";

    std::cout << "\n\n";

    switch (day)
    {
    case 1:
        std::cout << "Monday\n";
        break;
    case 2:
        std::cout << "Tuesday\n";
        break;
    case 3:
        std::cout << "Wednesday\n";
        break;
    case 4:
        std::cout << "Thursday\n";
        break;
    case 5:
        std::cout << "Friday\n";
        break;
    case 6:
        std::cout << "Saturday\n";
        break;
    case 7:
        std::cout << "Sunday\n";
        break;
    default:
        std::cout << "Incorrect number of week day!!!\n";
    }

    std::cout << "\n\n";

    if(day == 1 || day == 2 || day == 3 || day == 4 || day == 5)
        std::cout << "Workday\n";
    else if(day == 6 || day == 7)
        std::cout << "Weekend\n";
    else
        std::cout << "Incorrect number of week day!!!\n";

    std::cout << "\n\n";

    switch (day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        std::cout << "Workday\n";
        break;
    case 6:
    case 7:
        std::cout << "Weekend\n";
        break;
    default:
        std::cout << "Incorrect number of week day!!!\n";
    }

    std::cout << "\n\n";

    int begin{ 8 };
    int end{ 20 };
    int beginLunch{ 12 };
    int endLunch{ 14 };

    std::cout << "input time: ";
    int time;
    std::cin >> time;

    if (time >= begin && time < beginLunch || time >= endLunch && time < end)
        std::cout << "You win\n";
    else
        std::cout << "You loose\n";

    std::cout << "\n\n";

    if (time >= begin && time < end)
    {
        if (!(time >= beginLunch && time < endLunch))
            std::cout << "You win\n";
        else
            std::cout << "You loose\n";
    }
    else
        std::cout << "You loose\n";


    std::cout << "\n\n";


    int month;
    std::cout << "input number of month: ";
    std::cin >> month;

    if (month == 12 || month == 1 || month == 2)
        std::cout << "winter\n";
    else if (month == 3 || month == 4 || month == 5)
        std::cout << "spring\n";
    else if (month == 6 || month == 7 || month == 8)
        std::cout << "summer\n";
    else if (month == 9 || month == 10 || month == 11)
        std::cout << "autumn\n";
    else
        std::cout << "Incorrect number of month!!!\n";

    std::cout << "\n\n";

    switch (month)
    {
    case 12:
    case 2:
    case 1:
        std::cout << "winter\n"; 
        break;
    case 3:
    case 4:
    case 5:
        std::cout << "spring\n"; 
        break;
    case 8:
    case 6:
    case 7:
        std::cout << "summer\n"; 
        break;
    case 9:
    case 10:
    case 11:
        std::cout << "autumn\n";
        break;
    default:
        std::cout << "Incorrect number of month!!!\n";
    }
    */

    int number{ 14 };

    if (number % 2)
        std::cout << "odd\n";
    else
        std::cout << "even\n";

    (number % 2) ? std::cout << "odd\n" : std::cout << "even\n";

    std::cout << ((number % 2) ? "odd" : "even") << "\n";
}
