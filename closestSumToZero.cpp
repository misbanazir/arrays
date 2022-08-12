#include<iostream>
#include<stdlib.h>

using namespace std;

int closestSum(int arr[], int size)
{
    int l_index = 0, r_index = size - 1;
    int curr_sum, closest_sum = 9999;
    int min_l_index = l_index, min_r_index = size - 1;
    while(l_index < r_index)
    {
        curr_sum = arr[l_index] + arr[r_index];
        if(abs(curr_sum)  < abs(closest_sum))
        {
            closest_sum = curr_sum;
            min_l_index = l_index;
            min_r_index = r_index;
        }
        if(curr_sum < 0)
            l_index++;
        else
            r_index--; 

    }
    cout<<"\nThe two elements whose sum is closest to zero is "<<arr[min_l_index]<<" and "<<arr[min_r_index]<<"\t";
}

int main()
{
    int arr[6] = {-5,-4,-1,0,6,7};
    for(int i = 0; i <= 5; i++)
    {
        cout<<arr[i]<<"\t";
    }
    closestSum(arr, 6);
    return 0;
}