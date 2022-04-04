#include <stdio.h>

/* Iterative and recursive functions for nCr */

int fact(int n){ //factorial function, used as basis for nCr
	
	if(n==0){
		return 1;
	}else{
		return fact(n-1) * n;
	}
}
int nCr(int n, int r){ //iterarive nCr
	int num=0, den=0;
    num = fact(n); //call to factorial function and assigns to numerator
	den = fact(r) * fact(n-r); //call to factorial function parameters n and r and assign eequation to den
		return num/den; //returns fact(n) / fact(r) * fact(n-r) as num/dem
}

int NCR(int n, int r){ //recursive NCR
	
	if(n == r || r == 0){ // r can only be up to n value and not below 0
		return 1;
	}else{ 
       return NCR(n-1,r-1) + NCR(n-1, r);		//ncr(n-1, r-1) + nc(n-1,r)
	}	
}
int main(void){
	
	printf("%d \n", nCr(5,3));
	printf("%d \n", NCR(5,3));

	return 0;
}