#include<iostream>
using namespace std;

int methodIIOfSeperation(int *arr, int size)
{
    int count = 0;
    for(int index = 0; index <= size; index++)
    {
        if(arr[index] == 0)
        count++;
    }
    for(int index = 0; index < count; index++)
    {
        arr[index] = 0;
    }
    for(int index = count; index <= size; index++)
    {
        arr[index] = 1;
    }
}

int printArray(int arr[], int size)
{
    cout<<"array after seperating is \n";
    for(int index = 0; index <= size; index++)
    {
        cout<<arr[index]<<"\t";
    }
}

int main()
{
    int arr[8] = {0,1,1,0,0,1,0,1};
    methodIIOfSeperation(arr, 8);
    printArray(arr, 8);
    return 0;
}