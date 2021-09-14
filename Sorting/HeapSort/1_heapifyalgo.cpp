#include <iostream>
using namespace std;
class Heap
{
public:
    int n, arr[];
    void read_data();
    void max_heapify(int idx);
    void min_heapify(int idx);
    void buildHeap();
    void print_Heap();
};
void Heap ::read_data()
{
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    cout << "Enter the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void Heap ::max_heapify(int idx)
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
void Heap ::min_heapify(int idx)
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
void Heap ::buildHeap()
{
    int startIdx = (n / 2) - 1;
    for (int i = startIdx; i >= 0; i--)
    {
        // max_heapify(i);
        min_heapify(i);
    }
}
void Heap ::print_Heap()
{
    cout << "Array representation of Heap is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    Heap H;
    H.read_data();
    H.buildHeap();
    H.print_Heap();

    return 0;
}

//  Total time complexity will be O(N*logN).
