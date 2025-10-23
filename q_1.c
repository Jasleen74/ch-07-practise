/*1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array.*/

#include<stdio.h>
int main() {
          int myarray[10] = {1,2,3,4,5,6,7,8,9,10};

          int * ptr = myarray;


        printf("The third element is : %d\n", myarray[2]);
          printf("The value of the third element using the prt+2 is : %d \n", *(ptr+2));


          // it proves that *(array[0]+i = arr[i])


  
 return 0;
}