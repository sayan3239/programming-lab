#include<stdio.h>

int main () {
	int a,b;
	printf("enter a");
	scanf("%d",&a);
	printf("engter b");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping :a=%d\n,b=%d\n",a,b);
	
	return 0;
}