#include <iostream>
using namespace std;
class Sort
{
public:
    int n, arr[];
    void read_data();
    void insertionSort();
    void display_data();
};
void Sort ::read_data()
{
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    cout << "Enter the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void Sort ::insertionSort()
{
    int temp, j;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
void Sort ::display_data()
{
    cout << "The sorted array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    Sort array;
    array.read_data();
    array.insertionSort();
    array.display_data();
    return 0;
}


// Time Complexity
// Best    : Ω(n)
// Average : θ(n^2)
// Worst   : O(n^2)
