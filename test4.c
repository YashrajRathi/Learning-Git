#include<stdio.h>



void main(){

	printf("Enter the number that you want to find factorial.\n");
	int n = 0;
	scanf("%d",&n);
	if(n>=40){
		printf("The number is above our threshold limit.Please enter a smaller number.\n");
		return;
	}
	unsigned long fact = 1;
	for(int i=2;i<=n;i++){
		fact = fact * i;
	}
	printf("The factorial of given number is %ld\n",fact);

}
