#include<iostream>
using namespace std;

int seperate0And1(int *arr, int size)
{
    int leftIndex = 0; 
    int rightIndex = size - 1;
    while(leftIndex < rightIndex)
    {
        while(arr[leftIndex == 0] && (leftIndex < rightIndex))
            leftIndex++;
        while(arr[rightIndex == 1] && (rightIndex > leftIndex))
            rightIndex--;
        if(leftIndex < rightIndex)
        {
            arr[leftIndex++] = 0;
            arr[rightIndex--] = 1;
        }
    }
}

int main()
{
    int arr[8] = {0,1,1,0,1,0,0,1};
    seperate0And1(arr, 8);
    cout<<"Array after seperating 0 and 1\n";
    for(int i = 0; i <= 7; i++)
    {
    	cout<<arr[i]<<"\t";
    }
    return 0;
}
