/* Write a program containing a function which reverses the array passed to it*/
#include<stdio.h>
void reverse (int array[], int n ){
    int temp;
    for (int i = 0 ; i <(n/2); i ++){
        temp = array[i];
        array[i]= array[n-i-1];
        array[n-i-1] = temp;

    }
}
int main() {
    
    int myarray[6]= {1,2,3,4,5,6};
    int size = 6;

    reverse(myarray,size);
     for (int i = 0; i < size; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");
     
  
 return 0;
}