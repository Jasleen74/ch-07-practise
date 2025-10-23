/*4. Repeat problem 3 for a general input provided by the user using scanf.*/

 #include<stdio.h>
 int main() {
     int array[10] ;


     int p ;
     printf("Enter a number pls : ");
     scanf("%d",&p);

     printf("The table of %d is : \n",p);

     for(int i = 0 ; i <10 ; i++){

        array[i] = p*(i+1);
        printf("%d x %d : %d \n", p,(i+1) , array[i]);
     }
   
  return 0;
 }