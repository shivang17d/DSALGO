// Quick Sort
#include <iostream>
using namespace std;
class Sort
{
public:
    int n, arr[];
    void read_data();
    void swap(int* x,int* y);
    int partition(int low ,int high);
    void quickSort(int low ,int high);
    void display_data();
};
void Sort ::read_data()
{
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    cout<<"Enter the array : "<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
}
void Sort ::swap(int* x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int Sort ::partition(int low ,int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i < j)
        {
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[low],&arr[j]);
    return j;
}
void Sort ::quickSort(int low ,int high)
{
    // This if condition is used for atleast two element check
    if(low < high)
    {
        int pivot = partition(low,high);
        quickSort(low,pivot-1);
        quickSort(pivot+1,high);
    }
}
void Sort ::display_data()
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    Sort array;
    array.read_data();
    array.quickSort(0,array.n-1);
    cout<<"The sorted array is : "<<endl;
    array.display_data();
    return 0;
}

// Best ->	  Ω(n log(n))
// Average -> θ(n log(n))	
// Worst ->   O(n^2)










