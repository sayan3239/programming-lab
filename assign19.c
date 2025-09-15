#include<stdio.h>
//check the whole no
int main() {
	int num;
	printf("Enter the whole nunmber:");
	scanf("%d",&num);
	if(num>=0) {
		printf("THis number is whole number");
	} else{
		printf("This not a whole no");
	}
	return 0;
}