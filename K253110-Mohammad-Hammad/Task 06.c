#include <stdio.h>

int main(){
	int num, reverse = 0;
	printf("Enter Number : ");
	scanf("%d", &num);
	if (num > 0){
		while (num != 0){
		reverse = (reverse * 10) + (num % 10);
		num /= 10;
		}
		printf("Number Reversed = %d", reverse);
	}
	else{
		printf("ERROR! Invalid number entered.");
	}
	return 0;
}
