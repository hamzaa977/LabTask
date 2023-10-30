#include<stdio.h>
void print_table(int n);
int main()
{
    int n;
    printf("enter a number for a table: ");
    scanf("%d",&n);
    print_table(n);
    return 0;
}
void print_table(int n)
{
    int table;
    for(int i=1;i<=10;i++)
    {
        table=n*i;
        printf("\n %d x %d = %d",n,i,table);
    }
}