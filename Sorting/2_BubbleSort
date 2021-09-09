#include <iostream>
using namespace std;
class Sort
{
public:
    int n, arr[];
    void read_data();
    void swap(int *x, int *y);
    void bubbleSort();
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
void Sort ::bubbleSort()
{
    bool flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = true;
            }
        }

        if (flag == false)
        {
            break;
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
    array.bubbleSort();
    array.display_data();
    return 0;
}
