#include <iostream>

int main()
{
    int a = 0, b = 0;
    std::cin >> a >> b;

    auto sum = [](int a, int b) {
        return a + b;
    };

    auto square = [](int a) {
        return a * a;
    };

    auto cube = [](int a) {
        return a * a * a;
    };

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
            if (cube(b) > 0)
                std::cout << "[message] b^3 is " << cube(b)
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
            if (sum(a, b) > 0)
                std::cout << "[message] sum(a, b) is " << sum(a, b)
                          << "\n";
        }
    }

    if (square(a) > square(b))
        std::cout << "[message] square(a) > square(b)"
                  << "\n";

    return 0;
}