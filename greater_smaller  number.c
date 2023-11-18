#include<stdio.h>

void greater_integer(int x,int y)
{
    if(x>y)
        printf("greater");
    else if(x<y)
        printf("smaller");
    else
        printf("equal");
}

int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    if(((-100000) <= a <= (100000)) && ((-100000) <= b <= (100000)))
        greater_integer(a,b);
    return 0;
}

