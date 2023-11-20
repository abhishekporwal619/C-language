#include<stdio.h>

void palindrome(int num)
{
    int rem=0,revs=0,a=num;
    while(a!=0)
    {
        rem=a%10;
        revs = revs*10 + rem;
        a = a/10; 
    }
    
    if (num==revs)
        printf("palindrome%d %d ",num,revs);
    else
        printf("reverse%d  ",revs);
}

int main()
{
    int x;
    scanf("%d",&x);
    palindrome(x);
}