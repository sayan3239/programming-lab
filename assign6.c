#include<stdio.h>

int main () {
	float p,t,r;
	printf("enter p:");//p is principle
	scanf("%f",&p);
	printf("enter t:");//t is time
	scanf("%f",&t);
	printf("enter r:");//r is rate
	scanf("%f",&r);
	printf("The simple interest= %f",p*t*r/100);
	
	return 0;
}