//variables and data types

#include <stdio.h>

int main () {
	float height = 171;//%f
	double bankbalance = 20200;//%lf
	int phonenumber =712280929;//%d
	
	//prompt the user
	printf("Enter your height \t");
	scanf("%f",&height);
	
	printf("Enter your bankbalance \t");
	scanf("%lf",&bankbalance);
	
	printf("Enter phonenumber \t");
	scanf("%d",&phonenumber);
	
	
	printf ("My height is %.2f \n", height);
	printf("My bankbalance is %.2lf \n", bankbalance);
	printf("My phonenumber is %.2d \n",phonenumber);
}
	