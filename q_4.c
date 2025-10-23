/*5. Write a program containing a function which reverses the array passed to it*/
#include<stdio.h>

void reverse(int array[], int n ){
    for (int i =(n-1) ; i >=0 ; i -- ){
        
        printf("%d ", array[i]);
        printf("\n"); 
    }
}
int main() {
    int myarray[4]= {1,2,3,4};
    int size = 4;

    reverse(myarray,size);

     
  
 return 0;
}