#include <stdio.h>

int main(){
	int num, temp, cube = 1, sum = 0;
	printf("Enter a number to check if it is an Armstrong Number or not : ");
	scanf("%d", &num);
	temp = num;	
	while (temp != 0){
		cube = (temp % 10) * (temp % 10) * (temp % 10);
		sum += cube;
		temp /= 10;
	}
	if (sum == num){
		printf("Entered number is an Armstrong Number.");
	}
	else{
		printf("Entered number is not an Armstrong Number.");
	}
	return 0;
}
