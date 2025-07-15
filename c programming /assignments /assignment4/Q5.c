/*5. Write a menu driven program to take a number for user and perform operations as follows. 
Press 1.To check number is even or odd. 
2.To check number is prime or not. 
3.To check number is pallindrome or not. 
4.To check number is positive, negative or zero. 
5.To reverse a number. 
6.To find sum of digits.*//*5. Write a menu driven program to take a number for user and perform operations as follows. 
Press 1.To check number is even or odd. 
2.To check number is prime or not. 
3.To check number is pallindrome or not. 
4.To check number is positive, negative or zero. 
5.To reverse a number. 
6.To find sum of digits.*/
#include<stdio.h>
void main()
{
	int choice,num;
	char repeat='y';
	while(repeat=='y'||repeat=='Y')
    {
		printf("enter the number");
		scanf("%d",&num);
		printf("Enter 1 to check number is even or not\nEnter 2 to check the number is prime or not\nEnter 3 to check number is palindrome or not\nEnter 4 to check the number is positive negative or zero\nEnter 5 to reverse the number\nEnter 6 to find the sum of digit\n");
		printf("Enter the choice:");
		fflush(stdin);
		scanf("%d",&choice);
		if(choice==1)
		{
			if(num%2==0)
				printf("number is even");
			else
				printf("number is odd");
		}
		else if(choice==2)
		{
			int i=2;
			int status=1;
			if(num==1)
				status=0;
			while(i<=num/2)
			{
				if(num%i==0)
				status=0;
				i++;
			}
			if(status==1)
				printf("number is prime");
			else
				printf("number is not prime");
		}	
		else if(choice==3)
		{
			int temp,rem,reverse;
			temp=num;
			while(num>0)
			{
				rem=num%10;
				num=num/10;
				reverse=(reverse*10)+rem;
			}
			if(temp==reverse)
				printf("number is palindrome");
			else
				printf("number is not palindrome");
		}
		else if(choice==4)
		{
			if(num>0)
				printf("number is positive");
			else if(num<0)
				printf("number is negative");
			else
				printf("number is zero");
		}
		else if(choice==5)
		{
			int temp,rem,reverse;
			temp=num;
			while(temp>0)
			{
				rem=temp%10;
				temp=temp/10;
				reverse=(reverse*10)+rem;
			}
			printf("reverse number=%d",reverse);
		}
		else if(choice==6)
		{
			int rem,sum=0;
			while(num>0)
			{
				rem=num%10;
				sum=sum+rem;
				num=num/10;
			}
			printf("sum of digit is %d",sum);
		}
		else
		{
			printf("invalid choice");
		}
		printf("\nDo you want to try another option? (y/n):");
		fflush(stdin);
		scanf("%c",&repeat); 
}
printf("\nprogram end");
}