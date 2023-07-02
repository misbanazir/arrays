#include<Stdio.h>

int binarySearch(int arr[], int l_index, int r_index, int target)
{
    int m_index;
    while(l_index < r_index)
    {
        m_index = l_index + (r_index - l_index)/2;
        if(arr[m_index] == target)
        return m_index;
        if(arr[l_index] < target)
        l_index = m_index +1;
        else 
        r_index = m_index -1;
    }
    return -1;
}

int main()
{
    int arr[10] = {2,5,8,12,16,23,38,50,72,91};
    for(int i =  0; i <= 9; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("The target index is %d\t", binarySearch(arr, 0, 9, 23));
    return 0;
}