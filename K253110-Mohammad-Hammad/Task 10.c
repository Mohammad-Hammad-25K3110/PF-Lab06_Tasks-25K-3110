#include <stdio.h>
#include <math.h>

int main(){
	int P, r, n, t;
	float A;
	printf("Enter Value of P : ");
	scanf("%d", &P);
	printf("Enter Value of r : ");
	scanf("%d", &r);
	printf("Enter Value of n : ");
	scanf("%d", &n);
	printf("Enter Value of t : ");
	scanf("%d", &t);
	A = P * pow(1 + ((float)r / n),(float)n * t);
	printf("The future value of investment is %.2f", A);
	return 0;
}
