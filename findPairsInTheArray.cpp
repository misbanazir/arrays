#include<Stdio.h>
#define MAX 10

void findPairs(int *arr, int sum, int size)
{
    int index, temp;
    int hash[MAX] = {0};
     for(index = 0; index < size; index++)
     {
        temp = sum - arr[index];
        if(temp >= 0 && hash[temp] == 1)
        {
            printf("pair with given sum %d is" 
            "(%d, %d)\n", sum, arr[index], temp);
        }
        hash [arr[index]] = 1;
     }

}

int main()
{
    int arr[7] = {1, 4, 3, 3, 2, 5, 6};
    for(int i = 0; i <= 6; i++)
    {
        printf("%d\t", arr[i]);
    }
    findPairs(arr, 9, 7);
    return 0;
}