#include<stdio.h>
#include<math.h>
int main(){
  int i,j;
 for(i=1;i<=5;i++){
     if(i>=3 && i<5){
     	for(j=1;j<=i;j++){
     		if(j>1 && j<i){
     			printf("0 ");
			 }else{
			 	printf("1 ");
			 }
		 }
		 printf("\n");
	 }
	 else{
	 	for(j=1;j<=i;j++){
	 		printf("1 ");
		 }
		 printf("\n");
	 }
 }
}
