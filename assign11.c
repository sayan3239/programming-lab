# include<stdio.h>
 int main(){
 int num;
 int lastdigit1;
 printf("enter the integer digit:");
 scanf("%d",&num)	;
 lastdigit1=num%10;
 printf("the lastdigit of %d is %d\n",num,lastdigit1);// using modulus operator
 int x;
 int lastdigit2;
 x=num/10;
 lastdigit2=num-(10*x);
 printf("the lastdigit of %d is %d\n",num,lastdigit2); // without using modulus operator
 	return 0;
 }