#include<stdio.h>
float fact (int n)
{ 
    float s=n;
    for(int i=n;i>1;i--)
    {
    s=s*(i-1.0);
    }
    return s;
}
int main()
{
    int  n;
    float sum=0.0;
    printf("Enter a number:");
    scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    sum=sum+i/fact(i);
    printf("i:%d\t sum:%f\n",i,sum);
}
printf("Total sum is %f",sum);
return 0;
}