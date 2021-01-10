#include<stdio.h>

int main(){
    int accountholder1_account_number, accountholder2_account_number;
    float acoountholder1_account_balance, accountholder2_account_balance,transfer_amount;

    scanf("%d",&accountholder1_account_number);
    scanf("%f",&acoountholder1_account_balance);

    scanf("%d",&accountholder2_account_number);
    scanf("%f",&acoountholder2_account_balance);

    scanf("%d",&transfer_amount);

    //[blank line 1]
    if((accountholder1_account_balance>accountholder2_account_balance)&&(accountholder1_account_balance>=transfer_amount))
    { --- code for blank line 1

    } --- code for blank line 2
    accountholder1_account_number=accountholder1_account_number-transfer_amount;
    accountholder2_account_number=accountholder2_account_number+transfer_amount;
    [blank line 2]

    return 0;
}
