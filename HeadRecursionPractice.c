#include <stdio.h>

int fun(int n){
    
	if(n > 0){
		
		return fun(n - 1) + n;

    }
	
	return 0;
}	

int main(void){
	
	int x = 7;
	printf("%d ", fun(x));

   return 0;	
}