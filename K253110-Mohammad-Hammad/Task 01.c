#include <stdio.h>

int main(){
	int value, total = 0;
	printf("Enter value to add or \"0\" to stop : ");
	scanf("%d", &value);
	while (value != 0){
		total += value;
		printf("Enter value to add or \"0\" to stop : ");
		scanf("%d", &value);
	}
	printf("Total : %d", total);
	return 0;
}
