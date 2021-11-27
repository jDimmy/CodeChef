#include <iostream>
#include <string>
#include <vector>
using namespace std;

string deparenthesis(string exp)
{
    vector<char> paren;
    paren.push_back('+');

    vector<char> sign;
    sign.push_back('+');

    string new_exp = "";

    for (int i = 0; i < exp.length(); i++)
    {
        /* code */
        if (exp[i] == ')')
        {
            /* code */
            paren.pop_back();
            sign.pop_back();
        }
       else if (exp[i] == '-')
        {
            /* code */
            if (sign[sign.size() - 1] == '-')
            {
                /* code */
                sign[sign.size() - 1] = '+';
                paren[paren.size() - 1] = '+';
            }
            else
            {
                /* code */
                sign.push_back(exp[i]);
                paren.push_back(exp[i]);
            }
            
        }
        else if (exp[i] == '(')
        {
            /* code */
            paren.push_back(sign[sign.size() - 1]);
            sign.push_back(sign[sign.size() - 1]);
        } 
       else
        {
            /* code */
            if (exp[i] == '?')
            {
                /* code */
                new_exp = new_exp + paren[paren.size() - 1] + exp[i];
            }  
        }
    }

    return new_exp;
}

int nb_occurrences(string exp, char c)
{
    int occurrence = 0;

   for(int i = 0; exp[i] != '\0'; ++i)
   {
       if(exp[i] == c)
           ++occurrence;
   }
   
   return occurrence;
}

int evaluate(string exp)
{
    int value = nb_occurrences(exp, '?') - nb_occurrences(exp, '-');

    return value;
}


int main(int argc, char const *argv[])
{
    /* code */
    int L, R, T, Q;
    string S;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        /* code */
        cin >> S;
        cin >> Q;

        for (int j = 0; j < Q; j++)
        {
            /* code */
            string exp = "";
            
            cin >> L >> R;
            for (int k = L - 1; k < R; k++)
            {
                /* code */
                exp = exp + S[k];
            }
            
            string new_str = deparenthesis(exp);
            cout << evaluate(new_str) << "\n";
            
        }
        

    }

    return 0;
}
