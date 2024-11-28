#include<stdio.h>

int main() {
	
	int n1;
	int n2;
	
	printf("input number1\n");
	scanf("%d",&n1);
	
	printf("input number2\n");
	scanf("%d",&n2);
	
	if (n1>n2){
		int total=n1-n2;
		printf("n1 more than n2 = %d",total);
	} else{
		int total=n2-n1;
		printf("n2 more than n1 = %d",total);
	}
}

