//4. Print strong numbers in the given range 1 to n. 
#include<stdio.h>
void main()
{
	int i=1;
	while(i<=50000)
	{
	int num=i,rem,sum=0;
	int org=num;
	while(num>0)
	{
		rem=num%10;
		int fact=1;
		while(rem>1)
		{
			fact=fact*rem;
			rem--;
		}
		sum=sum+fact;
		num=num/10;	
	}
	if(sum==org)
	{
		printf("%d ",org);
	}
	i++;
}

}