//1. Print armstrong numbers in the given range 1 to n. 
#include<stdio.h>
void main()
{
	int j=1;
	while(j<=5000)
	{
		int num=j,rem,sum=0;
		int temp=num;
		int count=0;
		while(num>0)
		{
			count++;
			num=num/10;
		}
		num=temp;
		while(num>0)
		{
			rem=num%10;
			int res=1,i=1;
			while(i<=count)
			{
				res=res*rem;
				i++;
			}
			sum=sum+res;
			num=num/10;
			}
	if(sum==temp)
		printf("%d ",temp);
    	j++;
	}
}