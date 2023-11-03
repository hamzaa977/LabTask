#include <stdio.h>
int prime(int n);
int main()
{
    int size;
        printf("enter the size of array : ");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++)
        {
            printf("enter a number : ",i);
            scanf("%d",&arr[i]);
        }

          for(int i=0;i<size;i++)
        {
            prime(arr[i]);
        }
    return 0;
}

int prime(int n)
{
    if (n>1)
    {
        if (n%1==0 && n%n==0 && n%2==1)
        {
            printf(" %d is Prime number\n",n);
        }
        else
        {
            printf(" %d is composite number\n",n);
        }  
    }
    return 0;
}   