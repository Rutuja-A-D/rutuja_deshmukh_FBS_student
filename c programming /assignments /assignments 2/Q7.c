/*Accept the age and check if the person is: 
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)*/
void main()
{
	int age;
	printf("enter age:");
	scanf("%d",&age);
	if(age<12)
	{
    printf("person is child");
    	}
    else if(age>=12&&age<=19)
    {
    printf("person is teenager");
    	}
    else if(age>=20&&age<=59)
    {
    printf("person is Adult");
    	}
    else 
    {
        printf("person is senior");
      	}


}