#include <stdio.h>

/* indirect recursion, i.e. function calls another a separate function*/
int fun_B(int n); //function prototype to avoid implicit declaration

int fun_A(int n){ // accepts int value 20

    if(n > 0){
    printf("%d ", n);
    fun_B(n-1); //subtracts 20-1 '19' and calls function B
  }

}
int fun_B(int n){

     if(n > 1){
     printf("%d ", n);
     fun_A(n/2);   //integer divison of 'n' and result passed back to function A
   }

}

int main(void){

   int y=20; //declared and initialized y to 20
   fun_A(y); // passed 'y' to function A

   return 0;

}