#include <stdio.h>

int add(int a, int b){
	int result = a+b;
	return result;
}

int sub(int a, int b){
	int result = a-b;
	return result;
}
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

void main(int argc, char *argv[]){
	int a=6, b=3;

	printf("덧셈 : %d\n", add(a, b));
	printf("뺄셈 : %d\n", sub(a, b));
	printf("곱셈 : %d\n", mult(a, b));
	printf("나눗셈 : %d\n", divi(a, b));
}
