#include<stdio.h>
 void main(){
  //  int row;
    //printf("Enter no. of rows: ");
    //scanf("%d",&row);

    for(int i=1; i<=3; i++){
        for(int sp=2; sp>=i; sp--){
            printf("   ");

        }
        for(int j=1; j<=i; j++){
            printf("*  ");
        }
        printf("\n");
    }
    
 }
 