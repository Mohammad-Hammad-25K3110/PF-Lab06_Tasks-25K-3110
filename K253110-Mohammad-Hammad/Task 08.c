#include <stdio.h>
#include <math.h>

int main(){
	int I, S;
	float M, div_result;
	printf("Enter Intensity of Earthquake : ");
	scanf("%d", &I);
	printf("Enter a Standard Reference Value : ");
	scanf("%d", &S);
	div_result = I / S;
	M = log10(div_result);
	printf("Magnitude of Earthquake is %.2f", M);
	return 0;
}
