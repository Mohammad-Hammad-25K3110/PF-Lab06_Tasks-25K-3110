#include <stdio.h>

int main(){
	int num;
	printf("Enter number to multiply by 2, 4 & 8 : ");
	scanf("%d", &num);
	printf("Number multiplied by 2 = %d\n", num<< 1);
	printf("Number multiplied by 4 = %d\n", num<< 2);
	printf("Number multiplied by 8 = %d\n", num<< 3);
	return 0;
}
