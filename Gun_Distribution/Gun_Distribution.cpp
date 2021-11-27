#include <iostream>
#include <vector>
using namespace std;

int nb_Valeur_Distinct(vector<int> tab, int a, int b)
{
    int i, j;
    int nbv = b - a + 1;

    for(i = a; i <= b; i ++)
        /* Code */
       for(j = i + 1; j <= b; j ++)
       {
        /* Code */
        if(tab[i] == tab[j])
        {
            /* Code */
            nbv--;
            break;
        }
       }
    return nbv;
}

int main(int argc, char const *argv[])
{
    /* code */

    int T;
    int N;
    int x;
    int a;
    int b;

    cin >> T;

    for (int i = 0; i < T; i ++)
    {
        /* code */
        cin >> N;
        vector<int> A;

        for (int j = 0; j < N; j ++)
        {
            /* code */
            cin >> x;
            A.push_back(x);
        }

        x = 1;
        a = A.size() / 2;
        b = A.size() - 1;
        
        while (b - a > 0)
        {
            if (b - a < 4)
            {
                /* code */
                x = x * nb_Valeur_Distinct(A, 0, a);
                b = 0;
                a = 0;
            }
            else
            {
                /* code */
                cout << "a : " << a << " " << "b : " << b << "\n";
                x = x * nb_Valeur_Distinct(A, a + 1, b);
                
                b = a;
                a = a / 2;
            }
            
        }

        cout << x << "\n";

    }
     
    return 0;

}