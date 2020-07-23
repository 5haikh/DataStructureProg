#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x = 3;
	fun(x);
	return 0;
}

void fun(int n) {
	if(n>0) {
		printf("%d ", n);
		fun(n-1);
	}
}
