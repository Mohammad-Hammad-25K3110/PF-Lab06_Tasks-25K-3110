#include <stdio.h>

int main(){
	int num;
	printf("Enter number to check whether it is even or odd : ");
	scanf("%d", &num);
	if ((num & 1) == 0){
		printf("Entered number is even.");
	}
	else{
		printf("Entered number is odd.");
	}
	return 0;
}
