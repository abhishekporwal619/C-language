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
        int mini =i;
        for (int j=i+1;j<x;j++)
        {
            if (arr[j]<arr[mini]) {
                mini = j ;

            }
        }

        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;

    }
    for (int i=0;i<x;i++)
    {
        printf("%d ",arr[i]);

    }
    return 0;
}