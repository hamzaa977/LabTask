#include<stdio.h>
int main()
{
    char ch;
    int row;
    printf("enter a character\n");
    scanf("%c",&ch);
    printf("how many rows?\n");
    scanf("%d",&row);
    for(int i=1;i<=row;i++)
    {
        for(int j=row;j>=i;j--)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;

}