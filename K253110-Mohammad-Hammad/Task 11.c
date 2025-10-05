#include <stdio.h>
#include <math.h>

int main(){
	float H, angle, L;
	printf("Enter height of building (in meters) : ");
	scanf("%f", &H);
	printf("Enter angle of sun's elevation (in radians) : ");
	scanf("%f", &angle);
	L = H / tan(angle);
	printf("The length of the shadow of building is %.2f meters.", L);
	return 0;
}
