#include<stdio.h>
#include<math.h>
void main()


{   
	int amount ,compoundinterest;
	float time,rate,interest;
	
	printf("Enter Amount=");
	scanf("%d",&amount);
	
	printf("Enter interest rate=");
	scanf("%f",&rate);
	
	printf("Enter time duration=");
	scanf("%f",&time);
	
	interest=(amount*rate*time)/100;
	printf("Simple interesty=%0.2f",interest);
	
	compoundinterest=amount*pow((1+rate/100),time)-amount;
	printf("\ncompound inertest=%d",compoundinterest);
	getch();
}
