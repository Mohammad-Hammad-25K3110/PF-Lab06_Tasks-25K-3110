#include <stdio.h>

int main(){
	int withdraw, balance = 50000;
	printf("Current Balance = %d\n", balance);
	printf("Enter amount to withdraw : ");
	scanf("%d", &withdraw);
	while (balance != 0){
		if (withdraw == balance){
			balance -= withdraw;
			printf("Withdraw Successful!\n");
			printf("Current Balance : %d", balance);
			break;
		}
		else if (withdraw < balance){
			balance -= withdraw;
			printf("Withdraw Successful!\n");
			printf("Current Balance : %d\n", balance);	
		}
		else{
			printf("ERROR! Invalid Withdraw Amount.\n");
			printf("Current Balance : %d\n", balance);	
		}
		printf("Enter amount to withdraw : ");
		scanf("%d", &withdraw);	
	}
	return 0;
}
