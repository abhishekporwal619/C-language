#include<stdio.h>

int factorial(int num)
{   
    
    if (num==0)
      {
        return 1;
      }
    return num * factorial(num-1);
    
}

int main()
{
    int a,b;
    scanf("%d",&a);
    if ( a>0){

        b=factorial(a);
        printf("%d",b);
    }
    else
        printf("try again");
        
    return 0;
}