#include <stdio.h>
/* sum of natural numbers with recursion */
int fun_sum(int n){ 
    if(n==0){
        return 0;
    }else{
        return fun_sum(n-1) + n; // ascending recursion
    }
}
int main(void){
    int r=0;
    r= fun_sum(6);
    printf("%d", r);
    
    return 0;
}
