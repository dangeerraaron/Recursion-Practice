#include <stdio.h>

int fun_1(int n){ //formal parameter that accepts the value of 'y'
    
    static int a = 0; //fixed variable to increment
    
    if(n > 0){ 
        
        a++; //increment a by 1 
        return fun_1(n-1) + a; // on return will add a to each function call as call stack record deleted
    
    }
    return 0;
}

int main(void){
    
    int y=0; // initialize and declare y
    y=fun_1(7); //assign fun_1 and pass '7' as parameter to 'y'
    printf("%d", y); //display 'y'
    
    
    return 0;
}
