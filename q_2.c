/*3. Write a program to create an array of 10 integers and store multiplication table of
5 in it.*/
#include<stdio.h>
int main() {
     int array[10] ;

     for(int i = 0 ; i <10 ; i++){

        array[i] = 5*(i+1);
        printf("5 x %d : %d\n",(i+1) , array[i]);
     }
  
 return 0;
}