//2. Print prime numbers in the given range 1 to n. 

void main()
{
	int a=2;
	while(a<=100)
	{
	int num=a;
	int i=2;
	int flag=1;
	while(i<=num/2)
	{
		if(num%i==0)
		flag=0;
		i++;
	}
	if(flag==1)
	{
		printf("%d  ",num);
	} 
	a++;
    }
}