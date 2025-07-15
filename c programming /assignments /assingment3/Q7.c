/*7 Find factorial of given number. 
Input: n = 5 
Output: 120 */
#include<stdio.h>
void main()
{
	int num;
	int fact=1,i=1;
	printf("enter the number");
	scanf("%d",&num);
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial of given  number is %d",fact);
	
}