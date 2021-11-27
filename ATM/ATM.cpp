#include <iomanip>
#include <iostream>

int main(int argc, char const *argv[])
{

    int x{ }; // define variable x to hold user input (and zero-initialize it)
    float y{ }; // define variable y to hold user input (and zero-initialize it)
    std::cin >> x >> y; // get two numbers and store in variable x and y respectively

    // std::cout << x << " " << std::setprecision (2) << std::fixed << y << "\n";

    if(x < y)
    {
        if (x % 5 == 0)
        {
            if (y - x - .50 < 0)
            {
                std::cout << "%.2f\n" << y << "\n";
            }
            else
            {
                y = y - x - .50;
                std::cout << "%.2f\n" << y << "\n";
            }
        }
        else
        {
            std::cout << "%.2f\n" << y << "\n";
        }
        
        
    }
    else
    {
        std::cout << "%.2f\n" << y << "\n";
    }
    

    return 0;
}