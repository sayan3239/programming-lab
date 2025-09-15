# include<stdio.h>
# include<math.h>
int main(){
float p,r,t,n;
printf("enter p");// p is principle 
scanf("%f",&p);//  
printf("enter r");// r is rate
scanf("%f",&r);
printf("enter t");// t is time 
scanf("%f",&t);
printf("enter n");// n is pertime period
scanf("%f",&n);	
float a; 
a=(1+(r/n));
float b;
b= n*t;	
float x;
x=pow(a,b);
float A;// A is final amount
A=p*x;
printf("the compound interest is: %0.2f",A);
	return 0;
}