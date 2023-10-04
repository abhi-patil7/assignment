#include<stdio.h>
void main()
{
	float da,ta,hra;
	float bas=1000;
	if (bas<=5000){
		da=bas*0.10;
		ta=bas*0.25;
		hra=bas*0.30;
	}else{
		da=bas*15;
		ta=bas*0.25;
		hra=bas*0.30;
	}
	float totalsal=bas+da+ta+hra;
	printf("\n%f",totalsal);
}
