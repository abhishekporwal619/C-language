#include<stdio.h>
#include<string.h>
#include<math.h>

#define MAX_VALUE 100

int main()
{
    int i,x;
    scanf("%d",&x);
    int arr[x];

    for (i=0;i<x;i++)
    {
        scanf("%d",&arr[i]); 
    }
    //precompute
    int hash[MAX_VALUE];
    for (i=0;i<MAX_VALUE;i++)
    {
        hash[i] = 0;
    }

    for (i=0;i<x;i++)
    {
        hash[arr[i]]+=1;
    }

    for (i=0;i<MAX_VALUE;i++)
    {
        if (hash[i] > 0)
        {
            printf("%d %d\n", i, hash[i]);
        }
    }
    return 0;
}
