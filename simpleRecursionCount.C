#include <stdio.h>

int count(int n){

    if(n <= 100){
        
        printf("%d ", n);
	
	   count(n+1);
	}

}

int main (void){
     
     count(0);
     
    return 0;
}