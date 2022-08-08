#include<iostream>

using namespace std;

int getMajorityElement(int arr[], int size)
{
    int count = 0;
    int majorityindex = 0;
    for(int index = 1; index < size; index++)
    {
        if(arr[majorityindex] == arr[index])
        {
         count++;
        } 
        else {
            count--;
        }
        if(count == 0)
        {
            majorityindex = index;
            count = 1;
        }
    }
    return arr[majorityindex];
}

int isMajority(int arr[], int size, int majorityElement)
{
    int count = 0;
    for(int index = 0; index < size; index++)
    {
        if(arr[index] == majorityElement)
        count++;
    }
    return (count > size/2) ? 1: 0;
}
void printOutput(int arr[], int size)
{
    
    int majorityElement = getMajorityElement(arr, size);
    if(isMajority(arr, size, majorityElement))
    cout<<"the majority element is  "<< majorityElement <<" ";
    else 
    cout<<"NO MAJORITY ELEMENT";
}


int main()
{
    int arr[9] = {3,3,4,2,4,4,2,4,4};
    int size = 9;
printOutput(arr, size);
    return 0;
}