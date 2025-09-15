#include<stdio.h>
//check the year leap year or not
int main() {
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%400==0) {
		printf(" leapyear\n");
	} else if(year%100) {
		printf("year is not leapyear\n ");
	} else if(year%4==0) {
		printf("leapyear");
	} else{
		printf("year is not leapyear");
	}
	return 0;
}