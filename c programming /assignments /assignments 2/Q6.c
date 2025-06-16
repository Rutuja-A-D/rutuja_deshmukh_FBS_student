/*Accept a number and check if it is divisible by 3, 5, or both. 
(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by 
both" or” Divisible by None”) */
#include<stdio.h>
void main()
{
	int num;
	printf("enter the number");
	scanf("%d", &num);
	 if(num%3==0&&num%5==0)//
		{
     	printf("number is divisible by 3 and 5 both");
	    }
	 else if(num%3==0)
	 {
		printf("num is divisible by 3 not by 5");
			}
	else if(num%5==0)
		{
		
		printf("num is divisible by 5 not by 3");
			}

      else
     {
    	printf("divisible by none");
     }
}
