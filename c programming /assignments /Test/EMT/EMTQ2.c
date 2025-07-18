//1+11+111+1111

void main()
{
long long	int n=6;
	printf("enter the value for n");
  scanf("%d",&n);
	long long int a=0;
   int sum=0;
   
	for(int i=1; i<=n;i++)
	{
		a=a*10+1;
			printf("%lld" ,a);	
			//i=i*10;
			if(i<n)
			printf("+");	
					
	}
		}