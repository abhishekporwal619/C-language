#include<stdio.h>
int odd_even_digit(int a)
    {
     int x=0,y=0,i=0;
     while(a!=0)
        {

         if(i%2==0)
            {
             x+=a%10;
            }
         else
            {
             y+=a%10;
            }
         a=a/10;
         i++;

        }
     printf("odd:%d",y);
     printf("even:%d",x);
    }
int main()
{
    int x;
    scanf("%d",&x);
    odd_even_digit(x);
    return 0;
}
