#include <iostream>
using namespace std;
class Search
{
public:
    int n, key;
    int arr[];
    void read_data();
    int LinearSearch();
};
void Search ::read_data()
{
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    cout<<"Enter the array : "<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to be searched :"<<endl;
    cin>>key;
}
int Search ::LinearSearch()
{
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    Search s;
    s.read_data();
    cout<<"Index of "<<s.key<<" is "<<s.LinearSearch();
    return 0;
}
