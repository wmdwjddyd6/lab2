#include <stdio.h>
#include "main.h"

void main(int argc, char *argv[]){
	int a=6, b=3;

	printf("덧셈 : %d\n", add(a, b));
	printf("뺄셈 : %d\n", sub(a, b));
	printf("곱셈 : %d\n", mult(a, b));
	printf("나눗셈 : %d\n", divi(a, b));
}
