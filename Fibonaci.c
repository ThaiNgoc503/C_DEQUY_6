#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fibonaci(int fibo){
	if(fibo == 1){
		return 0;
	}
	if(fibo == 2) {
		return 1;
	}
	return fibonaci(fibo - 1) + fibonaci(fibo - 2); //fibonaci(4) = fi(3){1} + f(2){1} = {2}; <== fibonaci(3) = fi(2){0} + f(1){1} = {1}
}
int main(int argc, char *argv[]) {
	int so;
	scanf("%d", &so);
	printf("%d", fibonaci(so));
	return 0;
}
