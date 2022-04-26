#include <stdio.h>
#define SIZE 6
int IsPalindrome(int *arr, int size)
{
    if(size <= 1)
    {
        return 1;
    }
   else if(arr[0] != arr[size-1])
       {
           return 0;
       }
    else return IsPalindrome(arr + 1, size-2);
}
int main() {
    int arr[SIZE]={9,8,7,7,8,9};
    printf("%d \n",IsPalindrome(arr,SIZE));
    
    return 0;
}