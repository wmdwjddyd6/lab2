#include <stdio.h>

int mult(int a, int b){
	int result = a*b;
	return result;
}

int divi(int a, int b){
	if(b != 0){
		int result = a/b;
		return result;
	}
	else{
		printf("분모가 0입니다");
	}
}
