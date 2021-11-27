#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */

    int n{ };
    int k{ };

    int i;
    int nb{ };
    int count = 0;

    cin >> n >> k;
    if (n <= 10000000 && k <= 10000000) 
    {
        /* code */
        for ( i = 0; i < n; i++)
        {
            /* code */
            cin >> nb;
            if (nb < 1000000000 && nb % k == 0)
            {
                /* code */
                count ++;
            }
            
        }

        cout << count << "\n";

    }

    return 0;
}
