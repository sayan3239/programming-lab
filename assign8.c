#include<stdio.h>

int main () {
	float T,F;
	printf("enter the tempature of T in degree celcious:");
	scanf("%f",&T);
	printf("enter the teparature of F in farhenheite:");
	scanf("%f",&F);
	printf("farhenhite value is T is =%0.2f\n",(T*9/5)+32);
	printf("celcious value of F is =%0.2f\n",(F-32)*5/9);
	
	
	return 0;
}