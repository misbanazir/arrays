/* @author Misba */
#include<iostream>
using namespace std;

void findPair(int *arr,int sum, int size)
{
    int mark[10] = {0};
    int temp;
    for(int i=0; i<size; i++)
    {
        temp = sum - arr[i];
        if(temp >= 0 && mark[temp] == 1)
        {
            cout<<"pair with the given sum " << sum <<" is " << arr[i] <<" and " << temp <<"\n";
        }
        mark[arr[i]] = 1;
    }

}

int main()
{
    int size = 5;
    int arr[size];
    cout<<"enter the elements in an array\n";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"\n The output array is\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    findPair(arr, 9, 5);
    return 0;
}