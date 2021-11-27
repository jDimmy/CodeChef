#include <iostream>
using namespace std;

int main() {
	// your code goes here
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
                printf("%.2lf", y);
            }
            else
            {
                y = y - x - .50;
                printf("%.2lf", y);
            }
        }
        else
        {
            printf("%.2lf", y);
        }
        
        
    }
    else
    {
        printf("%.2lf", y);
    }
    
	return 0;
}
