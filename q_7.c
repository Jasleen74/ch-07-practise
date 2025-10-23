/*8. Repeat problem 7 for a custom input given by the user*/
#include<stdio.h>
int main() {

    int array[3] [10] ;
     int multiply[3];      //                       or we can write as int n1,n2,n3;
     for (int i = 0 ; i <3; i ++){              //   scanf("%d  %d  %d", &n1,&n2,&n3);       
        printf("enter the num pls : ");         //   int multiply[] = {n1,n2,n3};
        scanf("%d",& multiply[i]);
        
     }

     for(int i = 0 ; i <3; i++){
        for (int j = 0 ; j <10 ; j ++){
            array[i][j] = multiply[i] *(j+1);
           
        }
     }

     
     for(int i = 0 ; i <3; i++){
        for (int j = 0 ; j <10 ; j ++){
            printf("The table is %d\n", array[i][j]);
        }printf("\n");
     }
     
  
 return 0;
}