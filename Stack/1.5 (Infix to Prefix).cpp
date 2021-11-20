#include <bits/stdc++.h>
using namespace std;
int precedence(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '/' || c == '*')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string InfixToPrefix(string infix)
{
    stack<char> st;
    string prefix;
    for (int i = infix.length()-1; i >= 0; i--)
    {
        char c = infix[i];
        if (c == ' ')
        {
            continue;
        }
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            prefix = c + prefix;
        }
        else if (c == ')')
        {
            st.push(')');
        }
        else if (c == '(')
        {
            while (st.top() != ')')
            {
                prefix = st.top() + prefix;
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && precedence(c) < precedence(st.top()))
            {
                prefix = st.top() + prefix;
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty())
    {
        prefix = st.top() + prefix;
        st.pop();
    }
    return prefix;
}
int main()
{
    string infix;
    cout << "Enter Infix Expression  : ";
    getline(cin, infix);
    cout << "Prefix Expression       : " << InfixToPrefix(infix);
    return 0;
}
