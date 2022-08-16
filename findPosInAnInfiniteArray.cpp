#include<iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    int mid;
    while(l <= r)
    {
        mid = l +(r - l)/2;
        if(arr[mid] == x)
        {
            return mid;
        }
        if(arr[l] < x)
        return (arr, mid - 1, r, x);
        else 
        return (arr, l, mid + 1, x);
    }
    return -1;
}

int findPos(int arr[], int key)
{
    int low = 0;
    int high = 1;
    int val = arr[0];
    if(val < key)
    {
        low = high;
        high = 2 * high;
        val = arr[high];
    }
    return binarySearch(arr, low, high, key);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int temp = findPos(arr, 1);
    if(temp == -1)
        cout<<"element is not found";
    else 
        cout<<"element is at index "<<temp;
    return 0;

}