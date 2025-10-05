#include <stdio.h>
#include <math.h>

int main(){
	int members;
	float cost;
	printf("Enter number of members in group : ");
	scanf("%d", &members);
	cost = ceil(members*250.5);
	printf("Minimum total cost of a group of %d members is %.0f rupees (rounded to nearest ruppee).", members, cost);
	return 0;
}
