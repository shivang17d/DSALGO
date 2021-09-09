#include <iostream>
using namespace std;
class Sort
{
public:
    int n, arr[];
    void read_data();
    void swap(int *x, int *y);
    void selectionSort();
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
void Sort ::swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Sort ::selectionSort()
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(&arr[i], &arr[min]);
        }
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
    array.selectionSort();
    array.display_data();
    return 0;
}


// Time Complexity : 

// Best   ------> O(n^2)
// Average -----> O(n^2)
// Worst -------> O(n^2)
