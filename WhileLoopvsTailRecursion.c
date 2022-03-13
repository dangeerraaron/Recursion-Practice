#include <stdio.h>
#include <stdlib.h>

/* tail recursion vs. while loop */

int fun_1(int n){
	
	while(n > 0){  // versus: if(n > 0) 
		
       printf("%d", n); // print/display value of 'n'

       n= n -1;	   // versus: fun_1(n - 1), decrement the value of 'n' by one and eventually loop condition fails and exits
	}
	return 0;
}
int main (void){
	
	int a = 5;
	fun_1(5); //pass into fun_1
	
	return 0;
}


/* while loop is space O(1), does not consume memory in call stack 

   tail recursion is space O(n) as this requires 'n' number of calls in stack */