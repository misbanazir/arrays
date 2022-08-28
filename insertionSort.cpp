#include<iostream>

using namespace std;

void insertionSort(int arr[], int size)
{
    int i, j;
    for(j = 1; j <= size; j++)
    {
        int key = arr[j];
        i = j - 1;
        while(i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
}

void printArray(int arr[], int size)
{
    for(int i = 0; i <= 8; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {9,6,5,8,0,2,7,1,3};
    int size = 9;
    //for(int i = 0; i <= 8; i++)
    //{
      //  cout<<arr[i]<<"\t";
    //}
    cout<<"Before Sorting"<<endl;
    printArray(arr, size);
    insertionSort(arr, size);
    cout<<"After Sorting"<<endl;
    printArray(arr, size);
    return 0;
}