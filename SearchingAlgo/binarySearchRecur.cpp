// Recursive

#include <iostream>
using namespace std;
class Search
{
public:
    int n, key;
    int arr[];
    void read_data();
    int binarySearch(int low ,int high);
    int rbinarySearch(int low ,int high);
};
void Search ::read_data()
{
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    cout << "Enter the sorted array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key to be searched : " << endl;
    cin >> key;
}
int Search ::binarySearch(int low ,int high)
{
    if(low > high)
    {
        return -1;
    }
    int mid = low + (high-low)/2;
    if(arr[mid] == key)
    {
        return mid;
    }
    else if(key > arr[mid])
    {
        return binarySearch(mid+1,high);
    }
    return binarySearch(low,mid-1);
}
int Search ::rbinarySearch(int low ,int high)
{
    if(low > high)
    {
        return -1;
    }
    int mid = low + (high-low)/2;
    if(arr[mid] == key)
    {
        return mid;
    }
    else if(key > arr[mid])
    {
        return rbinarySearch(low,mid-1);
    }
    return rbinarySearch(mid+1,high);
}
int main()
{
    Search s;
    s.read_data();
    cout<<"Index of  "<<s.key<<" is : "<<s.binarySearch(0,s.n-1);
    // cout<<"Index of  "<<s.key<<" is : "<<s.rbinarySearch(0,s.n-1);
    return 0;
}
