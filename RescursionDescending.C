#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

//descending recursion

int fun_2(int n){ //formal parameter

    if(n > 0){
		
        fun_2(n -1);	//base case, descending/return call
	
	    printf("%d", n);

    }
	
return 0;	

}
	
int main(void){

    int x = 3;
	
	fun_2(x); //function call

   return 0;
}