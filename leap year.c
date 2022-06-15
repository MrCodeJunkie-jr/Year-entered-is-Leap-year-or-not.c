#include<stdio.h>

int main(){
	int x;
	printf("Enter a year in AD: ");
	scanf("%d",&x);
	if(x % 4 != 0){
		printf("The year entered is not a leap year");
	}
	else {
		if (x % 100 == 0){
			printf("The year entered is not a leap year");
		}
		else if (x % 400 != 0){
			printf("The year entered is not a leap year");
		}
		else{
			printf("The year is a leap year");
		}
	}
	return 0;
}
