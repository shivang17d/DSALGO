#include <bits/stdc++.h>
using namespace std;
double evaluatePostfix(string postfix)
{
    stack<int> st;

    if (!st.empty())
    {
        return -1;
    }

    for (int i = 0; i < postfix.size(); ++i)
    {

        if (postfix[i] == ' ')
        {
            continue;
        }
        if (isdigit(postfix[i]))
        {
            int num = 0;

            while (isdigit(postfix[i]))
            {
                num = num * 10 + (double)(postfix[i] - '0');
                i++;
            }
            i--;
            st.push(num);
        }
        else
        {
            double val1 = st.top();
            st.pop();
            double val2 = st.top();
            st.pop();

            switch (postfix[i])
            {
            case '+':
                st.push(val2 + val1);
                break;
            case '-':
                st.push(val2 - val1);
                break;
            case '*':
                st.push(val2 * val1);
                break;
            case '/':
                st.push(val2 / val1);
                break;
            }
        }
    }
    return st.top();
}
int main()
{
    string postfix;
    cout<<"Enter the Postfix Expression :  ";
    getline(cin,postfix);
    cout<<"Answer :  "<<evaluatePostfix(postfix);

    return 0;
}
