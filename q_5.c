/*6. Write a program containing functions which counts the number of positive
integers in an array.*/
#include<stdio.h>

int count(int array[], int n ){
    int positive =0;
    for (int i = 0; i <n; i ++){
        if(array[i]>0){
            positive ++;
        }
    }
    return  positive;
}
int main() {
     int myarray[10] = {1,2,-3,4,5,-6,7,8,9,-10};
    int  size = 10;
    printf(" the number of positive integers is : %d ", count(myarray,size));
    

          
  
 return 0;
}