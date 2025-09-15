#include<stdio.h>
//check the max among  three numbers using nested if else
int main () {
	int a,b,c ;
	printf("enter the values of a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b) {
		if(a>c) {
			printf("the greatest value is %d",a);
		}else {
			printf("the greatest value is %d",c);
		}if (b>a){
			printf("the greatest value is %d",b);
		} else{
			printf("the greatest value is %d",c);
		}
	} else {
		printf("the greatest value is %d",c);
	} 
}