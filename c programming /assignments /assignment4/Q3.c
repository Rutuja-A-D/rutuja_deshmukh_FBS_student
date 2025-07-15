//3. Print perfect numbers in the given range 1 to n. 
#include<stdio.h>
void main()
{
	int j=1;
	while(j<=5000)
	{
	int  num=j,sum=0;
	int i=1;
	while(i<num)
	{
		if(num%i==0)
			sum=sum+i;
			i++;
	}
	if(sum==num)
		printf("%d ",num);
		j++;
}
}
