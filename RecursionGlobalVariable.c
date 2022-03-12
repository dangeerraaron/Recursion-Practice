#include <stdio.h>

int x=0;  //GLOBAL Variable 'x' declared

int fun_2(int n){
	
	/* if static variable declared, place here within function */
	
	if(n > 0){
		
		x = x +1; //increment 'x' by 1
		
		return fun_2(n - 1) + x; //then call fun_2  and on return, and value of 'x' to each call
	}
	
	return 0;
}

int main(void){
	
	int b = 0; //intialize and declare b to 0;
	b = fun_2(5); //assign function 'fun_2' with value of 5 to b
	printf("%d", b); //display value of b after recursion function calls
	
	return 0;
}