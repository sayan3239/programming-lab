#include<stdio.h>
//swap two number using third veriable
int main () {
	int a,b,c;
	printf("enter a");
	scanf("%d",&a);
	printf("engter b");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("the swap num is %d and another is %d",a,b);
	
	
	return 0;
}