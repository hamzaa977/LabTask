#include<stdio.h>
int main()
{
    int even=0;
    int odd=0;
    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("enter value %d :",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
    }
    printf("\n");
    printf("\n");
     printf(" even count: %d",even);
     printf("\n");
     printf(" odd count : %d\n\n",odd);


     for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d is even\n",arr[i]);
        }
        else
        {
            printf("%d is odd\n",arr[i]);
        }
    }
    return 0;
}