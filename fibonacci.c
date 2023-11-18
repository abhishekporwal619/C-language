#include<stdio.h>

void fibonacci(int n)
{
    int x[n+1];
    x[0] = 0;
    x[1] = 1;
    for(int i=2; i<=n; i++)
    {
        x[i] = x[i-1] + x[i-2];
    }
    printf("%d",x[n]);
}

int main()
{
    int x;
    scanf("%d",&x);
    fibonacci(x);
    return 0;
}
