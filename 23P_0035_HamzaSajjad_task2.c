#include<stdio.h>
int main()
{
float obt_num=0;
float marks=0;
float tot_sub;
float tot_marks=0;
float avg;
float percent;
printf("enter total subjects :");
scanf("%f",& tot_sub);
printf("enter total marks :");
scanf("%f",& tot_marks);

for(int i=1;i<=tot_sub;i++)
{
    printf("enter subject %d obtained marks :",i);
    scanf("%f", & marks);
    obt_num=obt_num+marks;
}
avg=obt_num/tot_sub;
printf("your average is :%.2f\n",avg);
percent=(obt_num *100 ) / tot_marks;
printf("your percentage is :%.2f\n",percent);
return 0;
}