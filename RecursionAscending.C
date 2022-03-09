#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


// Recursion using Ascending/Calling paradigm

int fun_1(int n){

    if(n > 0){
	
	    printf("%d ", n);
	
	    fun_1(n-1); //base case for termination
	
	}

    return 0;
}

int main(void){

    int x = 3;
	fun_1(x); //function call

    return 0;
}
