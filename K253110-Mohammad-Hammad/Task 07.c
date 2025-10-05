#include <stdio.h>

int main(){
	int count = 0, temp, amount;
	printf("Enter Amount (in cents): ");
	scanf("%d", &amount);
	if (amount >= 0){
		temp = amount;
		while (temp != 0){
			if (temp >= 25){
				temp -= 25;
				count += 1;
			}
			else if (temp >= 10){
				temp -= 10;
				count += 1;
			}
			else if (temp >= 5){
				temp -= 5;
				count += 1;
			}
			else{
				temp -= 1;
				count += 1;			
			}
		}
		printf("Least number of coins required to make %d cents = %d", amount, count);
	}
	else{
		printf("ERROR! Invalid amount entered.");
	}
	return 0;
}
