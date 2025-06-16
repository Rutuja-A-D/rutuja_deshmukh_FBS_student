/*Accept the price from user. Ask the user if he is a student (user may say y or n). If he 
is a student and he has purchased more than 500 than discount is 20% otherwise 
discount is 10%.But if he is not a student then if he has purchased more than 600 
discount is 15% otherwise there is not discount. */
void main()
{
	int price;
	double discount=0.0,final_price;
	char x;
	 printf("Enter purchase amount: ");
    scanf("%d", &price);

	printf("are u a student\n y/n");
	scanf(" %c",&x);
	if(x=='y'||x=='Y')
	{
	//printf("oky u will gate 20% discount if ur bill is more than 500\n enter ur bill rice");
	
		if (price > 500)
		  {
            discount = 0.20; // 20%
          } 
		else
		 {
            discount = 0.10; // 10%
         }
		
		//printf("u got 20% discount");
	}
	else
	 {
        if (price > 600) {
            discount = 0.15; // 15%
        } 
		else {
            discount = 0.0;  // No discount
        }
    }
	
	final_price = price - (price * discount);
     printf("Final price after discount: %lf\n", final_price);


}