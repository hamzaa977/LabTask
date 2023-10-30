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
    int option;
    printf("select an option");
    scanf("%d", &option);
    if (option == 1)

    {
        int amt_to_dep;
        printf("enter the ammount you want to deposit\n");
        scanf("%d", &amt_to_dep);
        if (amt_to_dep <= 0)
        {
            ca_balance = ca_balance + amt_to_dep;
            printf("cash deposited successfully\n");
            printf("amount in current account is %d\n", ca_balance);
        }
        else
        {
            printf("Invalid amount");
        }
    }
    if (option == 2)
    {
        int amt_to_dep;
        printf("enter the amount you want to deposit\n");
        scanf("%d", &amt_to_dep);
        if (amt_to_dep <= 0)
        {
            sa_balance = sa_balance + amt_to_dep;
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
    int balance_opt;
    printf("select an option\n");
    scanf("%d", &balance_opt);
    if (balance_opt == 1)
    {
        printf("Balance in Current account is: %d R.s", ca_balance);
    }
    else if (balance_opt == 2)
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
    int opt;

    
    do{
    printf("\n==== ATM Menu ====\n");
    printf("1.withdrawl\n");
    printf("2.deposit\n");
    printf("3.balance_inquiry\n");
    printf("4.exit\n");
    printf("please select an option : ");
    scanf("%d", &opt);
    
        switch (opt)
        {
        case 1:
            withdraw();
            break;
        case 2:
            deposit();
            break;
        case 3:
            balance();
            break;
        case 4:
            printf("\nExit");
            break;
        default:
            printf("Invalid value");
            break;
        }
    }while (opt>=1&&opt<4);
    return 0;
}
