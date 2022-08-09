#include<iostream>
using namespace std;

int getOddOccurenceNumber(int *arr, int size)
{
    int index;
    int result = 0;
    for(index = 0; index < size; index++)
    {
        result = result ^ arr[index];
    }
    return result;
}

int main()
{
    int arr[7] = {3,2,1,2,3,1,1};

    for(int i = 0; i <= 6; i++)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<"\n The number is\n";
     cout<<(getOddOccurenceNumber(arr, 7));
    return 0;
}