#include <stdio.h>

int main(){
	int num, temp, count = 0;
	printf("Enter number : ");
	scanf("%d", &num);
	temp = num;
	while (num > 0){
		if (num & 1 == 1){
			count++;
		}
		num >>= 1;
	}
	printf("1s present in the binary form of %d : %d", temp, count);
	return 0;
}
