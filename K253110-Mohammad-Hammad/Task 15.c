#include <stdio.h>

int main(){
	int num1, num2;
	printf("Enter First Number : ");
	scanf("%d", &num1);
	printf("Enter Second Number : ");
	scanf("%d", &num2);
	printf("---BEFORE SWAPPING---\n");
	printf("First Number = %d\n", num1);
	printf("Second Number = %d\n", num2);
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num2 ^ num1;
	printf("---AFTER SWAPPING---\n");
	printf("First Number = %d\n", num1);
	printf("Second Number = %d", num2);
	return 0;
}
