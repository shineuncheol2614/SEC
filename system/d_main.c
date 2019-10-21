#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(){
	void *handle;
	int (*add)(int,int),(*sub)(int,int),(*mul)(int,int),(*div)(int,int);
	char *error;

	int a,b,result;
	char process;

	handle = dlopen("./lib/libcal.so",RTLD_LAZY);
	if(!handle){
		fputs(dlerror(),stderr);
		exit(1);
	}

	add = dlsym(handle,"add");
	if((error = dlerror())!=NULL){
		fprintf(stderr,"%s",error);
	}

	sub = dlsym(handle,"sub");
	if((error = dlerror())!=NULL){
		fprintf(stderr,"%s",error);
	}

	mul = dlsym(handle,"mul");
	if((error = dlerror())!=NULL){
		fprintf(stderr,"%s",error);
	}

	div = dlsym(handle,"div");
	if((error = dlerror())!=NULL){
		fprintf(stderr,"%s",error);
	}

	printf("input first integer : ");
	scanf("%d",&a);

	printf("enter your desired process : ");
	scanf(" %c",&process);

	printf("input second integer : ");
	scanf("%d",&b);

	switch(process){
		case '+' : printf("result : %d\n",add(a,b));
		break;
		case '-' : printf("result : %d\n",sub(a,b));
		break;
		case '*' : printf("result : %d\n",mul(a,b));
		break;
		case '/' : printf("result : %d\n",div(a,b));
		break;
		default: printf("input error");
	}
	dlclose(handle);
	return 0;

}
