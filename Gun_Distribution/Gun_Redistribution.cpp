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
    return nbv % 1000000007;
}

int main(int argc, char const *argv[])
{
    /* code */
    int N_MAX = 200000;
    int T = 0;
    int N = 1;
    int x = -1;
    int a;
    int b;

    while(T < 1 || T > 100000)
    {
        cin >> T;
    }

    for (int i = 0; i < T; i ++)
    {
        /* code */
        while(N < 2 || N > N_MAX)
        {
            cin >> N;
        }
        N_MAX -= N;
        vector<int> A;

        for (int j = 0; j < N; j ++)
        {
            /* code */
            cin >> x;
            A.push_back(x);
        }

        int max;
        a = A.size() / 2;
        b = A.size() - 1;

        max = nb_Valeur_Distinct(A, 0, b);
        x = nb_Valeur_Distinct(A, 0, a) * nb_Valeur_Distinct(A, a + 1, b);
        if (x > max)
        {
            /* code */
            max = x;
        }
        

        if (A.size() > 5)
        {
            /* code */
            a = (A.size() / 3) - 1;
            x = nb_Valeur_Distinct(A, 0, a) * nb_Valeur_Distinct(A, a + 1, 2 * a + 1) * nb_Valeur_Distinct(A,  2 * a + 2, b);

            if (x > max)
            {
                /* code */
                max = x;
            }
            
        }
        
        if (A.size() > 7)
        {
            /* code */
            a = (A.size() / 4) - 1;
            x = nb_Valeur_Distinct(A, 0, a) * nb_Valeur_Distinct(A, a + 1, 2 * a + 1) * nb_Valeur_Distinct(A,  2 * a + 2, 4 * a + 2) * nb_Valeur_Distinct(A, 4 * a + 3, b);

            if (x > max)
            {
                /* code */
                max = x;
            }
            
        }

            cout << "\n" << max << "\n";

        }
        
    return 0;

}
