void main()
 {
 	double bs=500;//bs=basic salary
 	int da,ta,hra,tsal;
 	 if(bs<=5000)
 	 {
 	 	da=bs*0.10;
 	 	ta=bs*0.20;
 	 	hra=bs*0.25;
	  }
	  else
	  {
	  	da=bs*0.15;
 	 	ta=bs*0.25;
 	 	hra=bs*0.30;
	  }
	  
	  tsal=bs+da+ta+hra;
	  printf("total salary is %d",tsal);
	  
 }