#include<iostream>


using namespace std;

void bubbleSort(int arr[], int size)
{
    int i; 
    int count = 1;
    while(count < size)
    {

    
        for(i = 0; i < size - count; i++)
        {
            if(arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        count++;
    }
}

void printArray(int arr[], int size)
{
    for(int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}

int main()
{
    int arr[] = {5,3,4,1,2};
    int size = 5;
    cout<<"Befor Sorting"<<endl;
    printArray(arr, size);
    bubbleSort(arr, size);
    cout<<"After Sorting"<<endl;
    printArray(arr, size);
    return 0;
}