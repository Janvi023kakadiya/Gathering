#include<stdio.h>

sum(a,b){
	return (a*a)+(2*a*b)+(b*b);
}
 int main(){
 	
 	int a,b, result;
 	
 	printf("Enter the Value of a=");
 	scanf("%d",&a);
 	
 	printf("Enter the Value of b=");
 	scanf("%d",&b);
 	
 	result=sum(a,b);
 	printf(" Answer %d",result);
	
}
