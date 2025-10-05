#include <stdio.h>

int main(){
	int table;
	printf("Enter number to print its table : ");
	scanf("%d", &table);
	for (int i = table, count = 1; count <= 10; i += table, count += 1){
		printf("%d * %d = %d\n", table, count, i);
	}
	return 0;
}
