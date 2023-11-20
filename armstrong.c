#include<stdio.h>
#include<math.h>

void armstrong(int num)
{
    int a=num,count=0,b=0,c=num;
    while(a!=0)
    {
        a=a/10;
        count = count +1;
    }
    //printf("%d\n",count);
    while(c!=0)
    {
        b += pow((c%10),count);
        c = c/10;
        //printf("%d\n",b);
    }
    //printf("%d\n",b);
    if (b==num)
        printf("armstrong");
    else
        printf("not armstrong");
}

int main()
{
    int a;
    scanf("%d",&a);
    armstrong(a);
    return 0;
}