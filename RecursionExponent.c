#include <stdio.h>

// Recursion to find exponent result.

int pow(int m, int n){
    if(n == 0){
        return 1;
    }else{
        return pow(m, n-1) * m;
    }
}
int main(void){

    int a=0, b=0;
    int result =0;
    
	printf("Enter two numbers to determine exponent result: \n");
    scanf("%d %d", &a, &b);
    
	result = pow(a,b);
    
	printf("Power = %d", result);

    return 0;

}