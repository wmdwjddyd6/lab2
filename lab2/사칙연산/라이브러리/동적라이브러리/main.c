#include <stdlib.h>
#include <dlfcn.h>
#include <stdio.h>
#include "main.h"

void main(int argc, char *argv[]){
	void *handle;
	int (*add)(int,int),(*sub)(int,int),(*mult)(int,int),(*divi)(int,int);
	int a=6, b=3;

	handle = dlopen("./lib/libtest.so", RTLD_LAZY);
	if(!handle){
		fputs(dlerror(), stderr);
		exit(1);
	}
	add = dlsym(handle, "add");
	if((error == dlerror()) != NULL){
		fprintf(stderr, "%s", error);
		exit(1);
	}
		
	sub = dlsym(handle, "sub");
	if((error == dlerror()) != NULL){
		fprintf(stderr, "%s", error);
		exit(1);
	}
	mult = dlsym(handle, "mult");
	if((error == dlerror()) != NULL){
		fprintf(stderr, "%s", error);
		exit(1);
	}
	divi = dlsym(handle, "divi");
	if((error == dlerror()) != NULL){
		fprintf(stderr, "%s", error);
		exit(1);
	}

	printf("덧셈 : %d\n", add(a, b));
	printf("뺄셈 : %d\n", sub(a, b));
	printf("곱셈 : %d\n", mult(a, b));
	printf("나눗셈 : %d\n", divi(a, b));
	dlclose(handle);
}
