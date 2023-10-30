#include <stdio.h.>
int main()
{
printf("what do you want to eat?");
printf("\n1. BURGER");
printf("\n2. BIRYANI\n");
int choice;
scanf("%d",&choice);
 if(choice==1)
 {
    printf("would you like to add on fries and cold drink?\n");
    printf("1.YES/2.NO\n");
    int a;
    scanf("%d",&a);
    if(a==1)
    {
        printf("your bill after adding fries and cold drink to burger is RS.450\n");
    }
    else
    {
        printf("your bill is RS.300\n");
    }
 }
else if(choice==2)
 {
    printf("would you like to have half biryani or full biryani?\n");
    printf("1.HALF BIRYANI \n 2.FULL BIRYANI\n");
    int b;
    scanf("%d",&b);
    if(b==1)
    {
            printf("would you like add chicken piece?\n");
            printf("1.YES/2.NO\n");
            int c;
            scanf("%d",&c);
            if(c==1)
            {
            printf(" YOUR TOTAL BILL IS RS.190\n");
            }
            else
            {
                printf("YOUR BILL IS 120\n");
            }
    }
   else if(b==2)
    {
        printf("would you like to add chicken piece ?\n");
        printf("1.YES/2.NO\n");
        int d;
        scanf("%d",&d);
        if(d==1)
        {
            printf("YOUR TOTAL BILL IS RS.310\n");
        }
        else 
        {
            printf("your total bill is RS.270\n");
        }
    }
 }
   else
    {
        printf("\nInvalid Value");
    }
    return 0;
}