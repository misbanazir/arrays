#include<iostream>
using namespace std;

int getMaxDifference(int *arr, int size)
{
    int min_ele_so_far = arr[0];
    int maxdiff_so_far = arr[1] - arr[0];
    int currdiff_so_far = arr[1] - arr[0];
    int index;
    for(index = 1; index < size; index++)
    {
        if(arr[index] < min_ele_so_far)
        {
            min_ele_so_far = arr[index];
        }
        else {
            currdiff_so_far = arr[index] - min_ele_so_far;
         }
         if(currdiff_so_far > maxdiff_so_far)
            maxdiff_so_far = currdiff_so_far;
    }
    return maxdiff_so_far;

}

int main()
{
    int arr[6] = {4,5,6,2,10,7};
    for (int i = 0; i <= 5; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<"\nmaximum difference is "<<(getMaxDifference(arr, 7));
    return 0;
}