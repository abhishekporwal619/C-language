#include<stdio.h>

int main()

{
    int i,x;
    scanf("%d",&x);
    int arr[x];

    for (i=0;i<x;i++)
    {
        scanf("%d",&arr[i]); 
    }

    for (i=0;i<x;i++)
    {
        int j = i;
        while (j>0 && arr[j-1] > arr[j])
        { 
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp; 
            j--;   
        }


    }
    for (int i=0;i<x;i++)
    {
        printf("%d ",arr[i]);

    }
    return 0;
}