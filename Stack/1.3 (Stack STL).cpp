// Stack STL
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(23);
    s.push(5);
    s.push(21);
    s.push(12);
    cout << s.size() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    cout << "--------------------------- " << endl;

    stack<int> s1;
    s1.push(8);
    s1.push(3);
    s1.push(1);
    s1.push(7);

    stack<int> s2;
    s2.push(21);
    s2.push(12);
    s2.push(31);
    s2.push(56);
    s2.push(36);
    s2.push(12);
    

    // cout << "Before swapping" << endl;
    // cout << "Stack1 :  ";
    // while (!s1.empty())
    // {
    //     cout << s1.top() << " ";
    //     s1.pop();
    // }
    // cout<<endl;

    // cout << "Stack2 :  ";
    // while (!s2.empty())
    // {
    //     cout << s2.top() << " ";
    //     s2.pop();
    // }
    // cout<<endl;

    cout << "--------------------------- " << endl;
    


    s1.swap(s2);

    cout << "After swapping" << endl;
    cout << "Stack1 :  ";
    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;

    cout << "Stack2 :  ";
    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << endl;

    cout << "--------------------------- " << endl;
    
    // Difference between stack::emplace() and stack::push() function.
    // While push() function inserts a copy of the value or the parameter passed
    // to the function into the container at the top, the emplace() function
    // constructs a new element as the value of the parameter and then adds
    // it to the top of the container.

    stack<int> st;

    // st.push(2);
    // st.push(3);
    // st.push(1);
    // st.push(5);
    // st.push(9);

    st.emplace(2);
    st.emplace(3);
    st.emplace(1);
    st.emplace(5);
    st.emplace(9);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
