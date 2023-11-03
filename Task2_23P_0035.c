#include<stdio.h>
int main()
{
    int arr[10];
    int min=5;
    int max=0;
    for(int i=0;i<10;i++)
    {
        printf(" Rate The Movie (1-5) : \n");
        scanf("%d",&arr[i]);
        if(arr[i]>5 || arr[i]<1)
        {
            printf("please give your review again");
            i--;
        }
    }        
    for(int i=1;i<10;i++)
    {
            if(arr[i]<min)
            {
                min=arr[i];

            }
            if(arr[i]>max)
            {
               max=arr[i];
                
            }
    }
    printf("lowest rating is  : %d\n",min);   
    printf("highest rating is : %d  \n",max);
    int sum=0;
    int avg=0;
    // for(int i=0;i<10;i++)
    // {
    //     sum=sum+arr[i];
    // }
    // avg=sum/10;
    avg=(arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]+arr[6]+arr[7]+arr[8]+arr[9])/10;
    printf("review  average of movie is : %d :) ",avg);
     
    return 0;
}