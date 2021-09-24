#include <iostream>
using namespace std;
class Sort
{
public:
    int n, arr[];
    void read_data();
    void merge(int low, int mid, int high);
    void mergeSort(int low, int high);
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
void Sort ::merge(int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int temp[n];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= high)
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    else
    {
        while (i <= mid)
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
    }
    for (k = low; k <= high; k++)
    {
        arr[k] = temp[k];
    }
}
void Sort ::mergeSort(int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        mergeSort(low, mid);
        mergeSort(mid + 1, high);
        merge(low, mid, high);
    }
}
void Sort ::display_data()
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    Sort array;
    array.read_data();
    array.mergeSort(0, array.n - 1);
    array.display_data();
    return 0;
}

// Time Complexity :
//Best    -->  Ω(n log(n))	
//Average -->  θ(n log(n))	
//Worst   -->  O(n log(n))
