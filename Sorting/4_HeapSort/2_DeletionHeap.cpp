#include<iostream>
using namespace std;
class Deletion
{
    public:
    int n ,arr[];
    void read_data();
    void max_heapify(int idx);
    void min_heapify(int idx);
    void deleteRoot();
    void display_data();

};
void Deletion ::read_data()
{
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    cout << "Enter the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void Deletion ::max_heapify(int idx)
{
    int largest = idx;
    int l = 2 * idx + 1;
    int r = 2 * idx + 2;

    if (l < n && arr[l] > arr[largest])
    {
        largest = l;
    }

    if (r < n && arr[r] > arr[largest])
    {
        largest = r;
    }
    if (largest != idx)
    {
        swap(arr[idx], arr[largest]);
        max_heapify(largest);
    }
}
void Deletion ::min_heapify(int idx)
{
    int smallest = idx;
    int l = 2 * idx + 1;
    int r = 2 * idx + 2;
    if (l < n && arr[l] < arr[smallest])
    {
        smallest = l;
    }

    if (r < n && arr[r] < arr[smallest])
    {
        smallest = r;
    }
    if (smallest != idx)
    {
        swap(arr[idx], arr[smallest]);
        min_heapify(smallest);
    }
}
// Function to delete the root from Heap
void Deletion ::deleteRoot()
{
    int lastElement = arr[n-1];
    arr[0] = lastElement;
    n = n - 1;
    // max_heapify(0);
    min_heapify(0);

}
void Deletion ::display_data()
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    Deletion D;
    D.read_data();
    D.deleteRoot();
    D.display_data();
    return 0;
}

// 10, 5, 3, 2, 4 


// Time Complexity  O(log n).
