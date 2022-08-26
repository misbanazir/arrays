#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int k)
{
    int index;
    for(index = 0; index <= 4; index++)
    {
        if(arr[index] == k)
        {
            return index;
        }
    }
    return -1;
    
}

int main()
{
    int arr[5];
    cout<<"enter elements in array";
    for(int i = 0; i <= 4; i++)
    {
        cin>>arr[i];
    }
    int result = linearSearch(arr,5, 4);
    (result == -1)
    ? cout<<"element is not found":
    cout<<"element is present at index "<<result;

    return 0;
}