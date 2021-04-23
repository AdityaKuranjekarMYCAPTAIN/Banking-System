#include<stdio.h>
#include<conio.h>
int pass=1234 ,word ,chn;
int menu();
void deposite();
void withdraw();
void transfer();
void checkdetail();
void last();
int totalamount=1000,amount,amo,tr,totaldeposite=0,totalwithdraw=0,totaltr=0;
int acc;
char a[6];
void main()
{
	printf("Enter The Password For Access to Your Account(pass is 1234) : ");
	scanf("%d",&word);
	if(word==pass)
	{
		printf("\n\nCorrect pass you have access :::\nPlz press any key to continue\n");
		getch();
		system("cls");
printf("Enter your name : ");
scanf("%s",&a);
printf("Enter your Account Number : ");
scanf("%d",&acc);
while(1)
 { 
	switch(menu())
	{	
		case 1:
			deposite();
			totaldeposite+=amount;
			break;
		case 2:
			withdraw();
			if(amo<=totalamount)
				totalwithdraw+=amo;
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
			last();
			getch();
			system("cls");
			exit(0);
		default :
			printf("\nInvalid Choice>:");
	}
	 system("cls");
 }
		getch();}
		else
		{
			printf("If you want to retry....press 1 else press zero");
		scanf("%d",&chn);
		if(chn==1)
		{
			printf("Enter The Password For Access to Your Account(pass is 1234) : ");
			scanf("%d",&word);
			if(word==pass)
			{
			printf("\n\nCorrect pass you have access :::\nPlz press any key to continue\n");
			getch();
			system("cls");
			printf("Enter your name : ");
scanf("%s",&a);
printf("Enter your Account Number : ");
scanf("%d",&acc);
while(1)
 { 
	switch(menu())
	{	
		case 1:
			deposite();
			totaldeposite+=amount;
			break;
		case 2:
			withdraw();
			if(amo<=totalamount)
				totalwithdraw+=amo;
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
			last();
			getch();
			system("cls");
			exit(0);
		default :
			printf("\nInvalid Choice>:");
	}
	 system("cls");
 }
		getch();
			}
			else
			printf("\nPassword Incorrect:PRESS ANY KEY TO EXIT")	;
			getch();
			close();
		}
		else
		close();
		}
}

int menu()
{
	int ch;
	printf("\n\n\n1. Deposite Amount : ");
	printf("\n2. Withdrawl Amount : ");
	printf("\n3. Transfer Amount : ");
	printf("\n4. Check Details : ");
	printf("\n5. EXIT : ");
	printf("\n Enter Your Choice : ");
	scanf("%d",&ch);
	return(ch);
}

void deposite()
{
	printf("\nEnter the Amount you want to enter : ");
	scanf("%d",&amount);
	totalamount=totalamount+amount;
}

void withdraw()
{
	printf("\nEnter the amount you want to withdraw : ");
	scanf("%d",&amo);
	if(amo<=totalamount)
		totalamount=totalamount-amo;
	else
		printf("\nLess Amount.Withdraw Not Possible.");
}

void transfer()
{
	printf("\nEnter the Amoununt You want to transfer : ");
	scanf("%d",&tr);
	if (tr<= totalamount)
		totalamount=totalamount-tr;
	else
		printf("\nLess amount,Transfer Not Possible.");
}

void checkdetail()
{
	system("cls");
	printf("\n\nTotal amount = %d",totalamount);
	printf("\nTotal deposited amount = %d",totaldeposite);
	printf("\nTotal Withdrawed amount = %d",totalwithdraw);
	printf("\nTotal Transfered amount = %d\n\n",totaltr);
	getch();
}

void last()
{
	printf("\nName =%s",a);
	printf("\nAccount number =%d",acc);
	printf("\nTotal amount = %d",totalamount);
	printf("\nTotal deposited amount = %d",totaldeposite);
	printf("\nTotal Withdrawed amount = %d",totalwithdraw);
	printf("\nTotal Transfered amount = %d\n\n",totaltr);
	printf("\n\n-------------THANKS------------");
}
//By Aditya Kuranjekar -->MyCaptain.......Under -->AVIRAL KAPOOR<<<<<<<<<>>>>>>>>>>>>>HAPPY CODING
