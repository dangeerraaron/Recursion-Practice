#include <stdio.h>
#include <stdlib.h>

int fun_tree(int n){

if(n > 0){

  printf("%d ", n);
  fun_tree(n-1);
  fun_tree(n-1);
  fun_tree(n-1);

}
return 0;
}

int main(void)
{

    int x = 3;
    fun_tree(x);

return 0;
}