/*6 Check the given number is Perfect number or not. 
Input: n = 28 
Output: Perfect */
#include<stdio.h>
void main()
{
	int  num,sum=0;
	int i=1;
	printf("enter the number");
	scanf("%d",&num);
	while(i<num)
	{
		if(num%i==0)
			sum=sum+i;
			i++;
	}
	if(sum==num)
		printf("number is perfect");
	else
		printf("number is not perfect");

}
