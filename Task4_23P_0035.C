#include<stdio.h>
int bus(int n);
int passen(int n);
int main()
{
    int n;
    printf(" ");
    bus(n);
    passen(n);
    return 0;

}

int bus(int n)
{
    int size;
    printf("enter the size of string :");
    scanf("%d",&size);
    int arr[size];
    printf("enter the bus stop numbers :");
    scanf("%d", &arr[size]);
}

int passen(int n)
{
   
    int sizen;
    printf("enter the size of second string : ");
    scanf("%d",&sizen);
    int arr[sizen];
    printf("enter the number of passengers: ");
    scanf("%d",&arr[sizen]);
}