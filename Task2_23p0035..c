#include<stdio.h>
int main()
{
    int num;
    int row;
    int col;
    printf("enter the number of rows: ");
    scanf("%d",&num);
    for(int row=1;row<=num;row++)
    {
        for( col=row;col<num;col++)
        {
            printf(" ");
        }
        for( col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}