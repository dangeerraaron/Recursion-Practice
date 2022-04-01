#include <stdio.h>
/* fibonacci series via recursion and loop */
int fib(int n){ //using iteration/for loop
	
	int t0=0, t1=1, sum=0, i=0; // t are the number terms to add, sum, i for the loop counter
	
	if(n <= 1){
		return n; // returns same number
	}
	for(i=2; i <=n; i++){ //starts from 2 
	
	    sum = t0 + t1;
		t0 = t1;
		t1=sum;
		
	}
	return sum;
}
int fibR(int x){ //recursive call for fibonacci numbers
	
	if( x <= 1){
		return x;
	}else{
		return fibR(x-1) + fibR(x-2);
	}
}
int main(void){
	
	printf("%d\n", fib(10));
	printf("%d\n", fibR(10));
	
	return 0;
}