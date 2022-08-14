#include<iostream>

using namespace std;

void findEqlibrium(int *arr, int size)
{
    int index = 0; int left_sum = 0; 
    int sum = 0;
    for(index = 0; index < size; index++)
    {
        sum += arr[index];
    }
    for(index = 0; index < size; index++)
    {
        sum -= arr[index];
        if(left_sum == sum)
        {
            cout<<" \nThe equlibrium is "<<index;
        }
        left_sum += arr[index];
    }
}

int main()
{
    int arr[7] = {7,2,1,4,6,4,0};
    for(int i = 0; i <= 6; i++)
    {
        cout<<"\t"<<arr[i];
    }
    findEqlibrium(arr, 7);
    return 0;
}