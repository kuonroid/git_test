#include <stdlib.h>
#include <stdio.h>

typedef struct st{
	int a;
	int b;
	int c;
}st;

void f(int* a){
	printf("%d", *a);
}
int main(int argc, char** argv){
	st* sp;
	int len;
	scanf("%d", &len);
	sp = (st*)malloc(len * sizeof(st));
	//st sts[3];
	//sp = sts;
	for(int i = 0; i < 3; i++){
		sp[i].a = 1 * i;
		sp[i].b = 2 * i;
		sp[i].c = 3 * i;
		printf("st[%d] %d %d %d", i, sp[i].a, sp[i].b, sp[i].c);
	}
	printf("Hello World.\n");
	f(&(sp[2].c));
	return 0;
}
