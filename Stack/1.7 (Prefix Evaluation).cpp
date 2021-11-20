#include <bits/stdc++.h>
using namespace std;
double  evaluatePrefix(string prefix)
{
    stack<int> st;

    for (int i = prefix.size() - 1; i >= 0; i--)
    {
        if (prefix[i] == ' ')
        {
            continue;
        }

        if (isdigit(prefix[i]))
        {
            double num = 0, j = i;
            while (i < prefix.size() && isdigit(prefix[i]))
            {
                i--;
            }
            i++;

            for (int k = i; k <= j; k++)
            {
                num = num * 10 + double(prefix[k] - '0');
            }
            st.push(num);
        }
        else
        {
            double val1 = st.top();
            st.pop();
            double val2 = st.top();
            st.pop();

            switch (prefix[i])
            {
            case '+':
                st.push(val1 + val2);
                break;
            case '-':
                st.push(val1 - val2);
                break;
            case '*':
                st.push(val1 * val2);
                break;
            case '/':
                st.push(val1 / val2);
                break;
            }
        }
    }

    return st.top();
}
int main()
{
    string prefix;
    cout << "Enter the Prefix Expression :  ";
    getline(cin, prefix);
    cout << "Answer :  " << evaluatePrefix(prefix);

    return 0;
}
