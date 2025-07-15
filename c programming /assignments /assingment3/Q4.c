 /*Assignment 3 
4 Check the given number is prime or not. 
Input: n = 7 
Output: Prime )*/
void main()
{
	int n=7,flag;
	for(int i=2 ;i<n; i++)
	{
		if(n%i==0)
		flag=1;
		break;
	}
	if(flag==0)
		printf("isprime");
		else
		printf("not prime");
		
		
		
	}
	
	 
