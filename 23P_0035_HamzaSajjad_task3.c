#include<stdio.h>
int factorial(int num);
int main()
{
    int num;
    printf("enter a number you want to get factorial of\n");
    scanf("%d",&num);
    factorial(num);
    return num;
}

int factorial(int num)
{
    int i;
    int mul=1;
  for(int i=1;i<=num;i++)
    {
     mul=mul*i;
    }
    printf("\nthe foctorial of %d is %d",num,mul);
}