#include<iostream>
using namespace std;

bool findTriplet(int arr[], int size, int x)
{
    
   // for(int index = 0; index < size; index++)
    //{ 
        int index = 0;
        int l_index = index + 1; 
        int r_index = size - 1;
        while(l_index < r_index)
        {
            int sum = arr[index] + arr[l_index] + arr[r_index];
            if(sum == x)
            {
                cout<<"\ntriplet is\t"<<arr[index]<<" "<<arr[l_index]<<" and "<<arr[r_index]<<"\t";
                return true;
            }
            else if(sum < x)
            {
                l_index++;
            }
            else 
            r_index--;
        }
    //}
  return false;  
}

int main()
{
    int arr[6] = {1,2,5,6,9,10};
    for(int i = 0; i <= 5; i++)
    {
        cout<<arr[i]<<"\t";
    }
    findTriplet(arr, 6, 9);
    return 0;
}
