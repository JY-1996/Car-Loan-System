#include <stdio.h>

float P;
int A, I;
int a, n, i;


int data();
int interest_paid();
int money_paid();
int total_interest();
int loan_unpaid();
int no_month();
int last_payment();

int main()
{
	data();
	interest_paid();
	money_paid();
	total_interest();
	loan_unpaid();
	no_month();
	last_payment();	
}

int data ()
{
	printf("Enter amount that borrowed:");
	scanf("%f",&P);
	printf("Enter amount that paid:");
	scanf("%d",&A);
	printf("Enter amount of interest (in percent):");
	scanf("%d",&i);
}


 int interest_paid()
 {
 	float I,P1 = P;
 	int s;
 	
 	printf("\ni)\n");
 	for(n=1;n<s;n++)
	{
		if(P1<0)
		{
			n = s;
		}
		else
		{
			I = P1*i/100;
			printf("The amount of interest paid of month %d is RM%.2f\n",n,I);
			P1 -= ( A - P1*i/100);
			
		}
	}
 }
 
 int money_paid()
 {
 	float B,P1 = P;
 	int s;
 	
 	printf("\n\nii)");
 	for(n=1;n<s;n++)
	{
		if(P1<0)
		{
			n = s;	
		}
		else
		{
			B = A - P1*i/100;
			printf("\nThe amount of money applied toward the unpaid balance of month %d is RM%.2f",n,B);
			P1 -= ( A - P1*i/100);
			
		}
	}
	
 }
int total_interest()
{
	float P1 = P,TI = 0;
	int s;
	
	printf("\n\niii)");
	for(n=1;n<s;n++)
	{
			if(P1<0)
		{
			n = s;	
		}
		else
		{
			I = P1*i/100;
			TI += I;
			printf("\nThe cumulative amount of interest that has been paid at the end of month %d is RM%.2f",n,TI);
			P1 -= ( A - P1*i/100);
		}
			
	}
 } 
 
 int loan_unpaid()
{
	float P1 = P;
	int s;
	
	printf("\n\niv)");
	for(n=1;n<s;n++)
	{
		if(P1<0)
		{
			n = s;	
		}
		else
		{
			printf("\nThe amount of the loan that is still unpaid at the end of month %d is RM%.2f",n,P1);
			P1 -= ( A - P1*i/100);
		}
	}
}
 int no_month()
 {
 	
	float P1 = P;
 	int s;
 	
 	printf("\n\nv)");
 	for(n=0;n<s;n++)
	{ 
		
		if(P1<0)
	{	
		printf("\nThe number of monthly payments required to repay the entire loan is %d month",n);
		n = s;
	}
		else
		{
		P1 -= ( A - P1*i/100);
		}
	}
	
}

int last_payment()
{
	float P1 = P;
	int s;
	
 	printf("\n\nvi)");
 	for(n=1;n<s;n++)
	{ 
		
		if(P1<A)
	{	
		printf("\nThe amount of the last payment is RM%.2f",P1);
		n = s;
	}
		else
		{
			P1 -= ( A - P1*i/100);
		}
	}
	
}
	
