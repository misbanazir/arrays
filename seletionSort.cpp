#include<iostream>
using namespace std;

void printList(int arr[], int n)
{
    for(int i=0; i<= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {    for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }

            
    }
}

int main()
{
    int n = 6;
    int arr[] = {2,5,7,9,3,1};
    cout<<"Before Selection Sort"<<endl;
    printList(arr, 6);
    cout<<"After Selection Sort"<<endl;
    selectionSort(arr, 6);
    printList(arr,6);
    return 0;   
}