#include<stdio.h>
#include <stdlib.h>

/* nested recursion example */

int fun(int n){
	
	if(n > 100)
		
		return n - 10;
	
	return fun(fun(n + 11));
	}


int main (void){
	
	int r;
	r=fun(95);
	printf("%d ", r); 
	
	return 0;
}