#include <stdio.h>
int ca_balance = 10000;
int sa_balance = 5000;

void withdraw()
{
    printf("==== Withdrawl ====\n");
    printf("select the account type\n");
    printf("1.current saving\n");
    printf("2.saving account\n");
    int acc_type;
    scanf("%d", &acc_type);
    if (acc_type == 1)
    {
        printf("enter the value amount you want to withdraw\n");
        int val;
        scanf("%d", &val);
        if (val <= ca_balance)
        {
            ca_balance = ca_balance - val;
            printf("balance withdrwa successfull\n");
            printf("Amount in current account is %d R.s", ca_balance);
        }
        else
        {
            printf("value is greater than current account balance\n");
        }
    }
    if (acc_type == 2)
    {
        printf("enter the value amount you want to withdraw\n");
        int value;
        scanf("%d", &value);
        if (value <= sa_balance)
        {
            sa_balance = sa_balance - value;
            printf("balance withdrwa successfull\n");
            printf("Amount in current account is %d R.s", sa_balance);
        }
        else
        {
            printf("value is greater than saving account balance\n");
        }
    }
}

void deposit()
{

    printf("==== Deposit====\n");
    printf("select the account type\n");
    printf("1.current account\n");
    printf("2.saving account\n");
    int a;
    printf("seelct an option");
    scanf("%d", &a);
    if (a == 1)
    {
        int b;
        printf("enter the ammount you want to deposit\n");
        scanf("%d", &b);
        if (b <= 0)
        {

            ca_balance = ca_balance + b;
            printf("cash deposited successfully\n");
            printf("amount in current account is %d\n", ca_balance);
        }
        else
        {
            printf("Invalid amount");
        }
    }
    if (a == 2)
    {
        int c;
        printf("enter the amount you want to deposit\n");
        scanf("%d", &c);
        if (c <= 0)
        {
            sa_balance = sa_balance + c;
            printf("cash deposited sucessfully\n");
            printf("amount in saving account is %d\n", sa_balance);
        }
        else
        {
            printf("Invalid amount");
        }
    }
}

void balance()
{

    printf("====Balance_Inquiry====\n");
    printf("1. current account\n");
    printf("2. saving account\n");
    int d;
    printf("select an option\n");
    scanf("%d", &d);
    if (d == 1)
    {
        printf("Balance in Current account is: %d R.s", ca_balance);
    }
    else if (d == 2)
    {
        printf("Balance in Saving account is: %d R.s", sa_balance);
    }
    else
    {
        printf("Invalid amount");
    }
}

int main()
{
    printf("==== ATM Menu ====\n");
    printf("1.withdrawl\n");
    printf("2.deposit\n");
    printf("3.balance_inquiry\n");
    printf("4.exit\n");
    printf("please select an option : ");
    int opt;
    scanf("%d", &opt);
    if (opt == 1)
    {
        withdraw();
    }
    else if (opt == 2)
    {
        deposit();
    }
    else if (opt == 3)
    {
        balance();
    }else if (opt == 4) {
        printf("\nExit");
    
    }else{

        printf("Invalid value");
    }

    return 0;
}
