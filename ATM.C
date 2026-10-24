#include<stdio.h>
int main()
{
 int pin=1234;
 int enteredpin;
 int choice;
 float balance=5000;
 float amount;
 printf("\n=====WELCOME TO ATM=====\n");
 printf("entre your PIN");
 scanf("%d",enteredpin);

 if(enteredpin !=pin)
 {
 printf("invalid PIN!\n");
 return 0;
}
printf("\nlogin successful!\n");

do
{
printf("\n=====ATM MENU=====\n");
printf("1.check balance\n");
printf("2.deposit money\n");
printf("3.withdraw money\n");
printf("4.exit\n");

printf("enter your choice:");
scanf("%d',&choice") ;

switch(choice)
{
case 1:
  printf(" your balance:Rs.%2f",balance);
  break;
case 2:
  printf("enter deposit amount:");
  scanf("%f",&amount);

  if(amount>0)
  {
   balance=balance+amount;
   printf("money deposited successfully!\n");
   printf("new balance:Rs,%2f\n",balance);
  }
  else
  {
   printf("invalid amount!\n");
  }
  break;
case 3:
  printf("enter withrawal amount:");
  scanf("%f",&amount);

  if(amount<=0)
  {
   printf("invalid amount!\n");
  }
  else if(amount<=balance)
  {
   balance=balance-amount;
   printf("please collect your cash.\n");
   printf("remaining balance:Rs.%2f\n",balance);
  }
  else
  {
   printf("insufficient balance!\n");
  }
  break;
case 4:
  printf("thankn you for using ATM!\n") ;
  break;

  default:
    printf("invalid choice!\n");
  }

 } while (choice!=4);
 return 0;
}
