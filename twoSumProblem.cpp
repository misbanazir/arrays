#include<iostream>
using namespace std;

void twoSum(int *arr, int target)
{
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++) {
            if(arr[i] + arr[j] == target) {
                cout<<i<<" "<<j;
            }
        }
    }         
}

int main()
{
    int arr[5] {2,3,4,5,8};
    for(int i=0; i<5; i++)
    {
       // cout<<arr[i]<<"\n";
    }
    //cout<<endl;
    twoSum(arr, 9);
    return 0;
}
