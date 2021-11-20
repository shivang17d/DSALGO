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
string InfixToPostfix(string infix)
{
   stack<char> st;
   string postfix;
   for (int i = 0; i < infix.length(); i++)
   {
      char c = infix[i];
      if (c == ' ')
      {
         continue;
      }
      else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
      {
         postfix += c;
      }
      else if (c == '(')
      {
         st.push('(');
      }
      else if (c == ')')
      {
         while (st.top() != '(')
         {
            postfix += st.top();
            st.pop();
         }
         st.pop();
      }
      else
      {
         while (!st.empty() && precedence(c) <= precedence(st.top()))
         {
            postfix += st.top();
            st.pop();
         }
         st.push(c);
      }
   }
   while (!st.empty())
   {
      postfix += st.top();
      st.pop();
   }
   return postfix;
}
int main()
{
   string infix;
   cout << "Enter Infix Expression  : ";
   getline(cin, infix);
   cout << "Postfix Expression      : " << InfixToPostfix(infix);

   return 0;
}
