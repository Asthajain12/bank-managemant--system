#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int list();
void deposit();
void transfer();
void withdraw();
void checkdetail();
void end();
int totalamount=1000,amount,amu,tr,totaldeposit=0,totalwith=0,totaltr=0;
int acc;
char a[50];
int menu()
{
    int a;
    printf(" \n 1. deposit amount");
    printf("\n 2.withdraw amount");
    printf("\n 3.transfer amount");
    printf("\n 4.check detail");
    printf("\n 5. exit");
    printf("\n enter your choice");
    scanf("%d",&a);
    return(a);
}
void deposit(){
    printf("\n enter amount you want to deposit:");
    scanf("%d",&amount);
    totalamount+=amount;
}
void withdraw(){
printf("\n enter amount to withdraw");
scanf("%d",&amu);
if(amu<=totalamount)
    totalamount-=amu;
else
    printf("\n less amount in your account withdraw is not possible");
}
void transfer(){
printf("\n enter amount you want to transfer");
scanf("%d",&tr);
if(tr<=totalamount)
    totalamount-=tr;
else
    printf("less amount, transfer is not possible");
}
void checkdetail()
{
    printf("\n total amount =%d",totalamount);
    printf("\n total deposit=%d",totaldeposit);
    printf("\n total withdraw=%d",totalwith);
    printf("\n total transfered amount=%d",totaltr);
}
void ministatement()
{
    printf("\n *********************************** \n");
    printf("\n your name=%s",a);
    printf("\n account number=%d",acc);
    printf("\n total amount =%d",totalamount);
    printf("\n total deposit=%d",totaldeposit);
    printf("\n total withdraw=%d",totalwith);
    printf("\n total transfered amount=%d",totaltr);
    printf("\n *************thanks********");
}
void main()
{
    system("cls");
    printf("\n enter your name");
    gets(a);
    printf("enter your account number");
    scanf("%d",&acc);
    while(1)
    {
    system("cls");
   switch( menu()){
   case 1:
     deposit();
     totaldeposit+=amount;
     break;
   case 2:
       withdraw();
       if(amu<=totalamount)
       totalwith+=amu;
       break;
   case 3:
       transfer();
       if(tr<=totalamount)
        totaltr+=tr;
       break;
   case 4:
       checkdetail();
       break;
   case 5:
       system("cls");
     ministatement();
    system("pause");
       exit(0);
   default:
       printf("\n invalid choice");
       break;
   }
    system("pause");
}
}
