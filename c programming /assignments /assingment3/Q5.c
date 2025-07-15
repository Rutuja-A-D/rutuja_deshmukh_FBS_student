/*5 Check the given number is Armstrong number or not.. 
Input: n = 153 
Output: Armstrong */
/*5 Check the given number is Armstrong number or not.. 
Input: n = 153 
Output: Armstrong */
//Armstrong number
void main()
{
	int num=153,rem,temp,sum=0;
	printf("entered  number=%d",num);
	//scanf("%d",&num);
	temp=num;
	int count=0;
	while(num>0)
	{
		count++;
		num=num/10;
	}
	num=temp;
	while(temp>0)
	{
		rem=temp%10;
		int res=1,i=1;
		while(i<=count)
		{
			res=res*rem;
			i++;
		}
	sum=sum+res;
	temp=temp/10;
	}
	if(sum==num)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not armstrong");
    }
}