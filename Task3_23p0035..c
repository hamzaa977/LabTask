#include<stdio.h>
int main()
{
    int num;
    int row;
    int col;
    printf("enter number of rows : ");
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<row;col++)
        {
            printf(" ");
        }
        for(col=row;col<=num;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}