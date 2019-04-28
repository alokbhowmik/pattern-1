#include<stdio.h>
#include<math.h>
int main(){
  int i,j;
 for(i=1;i<=5;i++){
     for(j=1;j<=i;j++){
         if(i==3&&j==2){
             printf("0");
         }
         if(i==4&&(j>=2&&j<=3)){
             printf("0");
         }
       else{
           printf("1");
       }
       printf(" ");
     }

     printf("\n");

 }
}
