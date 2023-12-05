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

    for (i=x-1;i>=0;i--)
    {
        for (int j=0;j<=i-1;j++)
        {
            if (arr[j]>arr[j+1]) {
               
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp; 

            }
        }


    }
    for (int i=0;i<x;i++)
    {
        printf("%d ",arr[i]);

    }
    return 0;
}