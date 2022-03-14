#include <stdio.h>
#include <stdlib.h>

int fun_2(int n){
	
	int i=1; //starting loop condition
	
	while(i <= n){ //vs. (if n > 0) of head recursion,  the logic is opposite to get same output, must have counter to increment
		
		             //insert base condition HERE for head recursion i.e.(n-1)      
		printf("%d ", i); // print output
		i=i+1;      //   increment i by '1' and re-enter while loop until termination condition mate
		
	}
	return 0;
}

int main(void){
	
	int a = 6;
	fun_2(a);
}
