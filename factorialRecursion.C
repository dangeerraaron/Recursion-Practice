#include<stdio.h>
/* factorial with recursion (n-1) * 1 */
int fun_fact(int n){ 
    if(n == 0){
           return 1;
       }else{
           return fun_fact(n - 1) * n;
    }
}   
    
int main(void){
    int r=0;
    r= fun_fact(5);
    printf("%d ", r);
    
    return 0;
}