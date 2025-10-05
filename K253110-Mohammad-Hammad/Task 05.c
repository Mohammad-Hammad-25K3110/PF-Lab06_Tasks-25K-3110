#include <stdio.h>

int main(){
	int num, factorial = 1;
	printf("Enter number of participants : ");
	scanf("%d", &num);
	if (num >= 0){
		for (num ; num > 0; num--){
			factorial *= num;
		}
		if (factorial == 1){
			printf("Total arrangement would be 1");
		}
		else{
			printf("Total arrangemnets would be %d", factorial);
		}
	}
	else{
		printf("ERROR! Invalid number of participants.");
	}	
	return 0;
}
