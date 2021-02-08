#include <iostream>

int main()
{
    int a = 0, b = 0;
    std::cin >> a >> b;
    if (a >= 0)
    {
        if (b >= 0)
        {
            std::cout << "[message] a >= 0 && b >= 0"
                      << "\n";
        }
        else
        {
            std::cout << "[message] b < 0 && a >= 0."
                      << "\n";
        }
    }
    else
    {
        if (b >= 0)
        {
            std::cout << "[message] a < 0 && b >= 0"
                      << "\n";
        }
        else
        {
            std::cout << "[message] b < 0 && a < 0."
                      << "\n";
        }
    }
    return 0;
}