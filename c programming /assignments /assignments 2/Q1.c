#include<stdio.h>
void main()
{
	int x,y,a;
	printf("enter the two value as per your choice\n");
    scanf("%d%d",&x,&y);
    printf("press 1 for addtion\npress 2 for substracttion \npress 3 for multiplication\npress 4 for dividation");    
	scanf("%d",&a);
	if(a==1)
	printf("addition=%d",x+y);
	else if(a==2)	
	printf("substraction=%d",x-y);
	else if(a==3) 
	printf("multiplication=%d",x*y);
	else
	printf("dividation=%d",x/y); 
	
	return 0;
}