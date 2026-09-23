//volume and surface area

#include <stdio.h>

int main () {
	float radius = 7 ; //%f
	float height = 15 ; //%f
	float volume;
	float surfacearea;
	
	//prompt the user
	printf("Enter the radius\t");
	scanf("%f",&radius);
	
	printf("Enter the height\t");
	scanf("%f",height);

	
	volume=3.142*radius*radius*height;
	surfacearea=2*3.142*radius*radius + 2*3.142*radius*height;
	
	
	printf("The volume is %.2f\n",volume);
	printf("The surfacearea is %.2f\n",surfacearea);
	
	return 0;
	
}