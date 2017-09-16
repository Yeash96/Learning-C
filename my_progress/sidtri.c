#include <stdio.h>

int main(){
	int count,n,i ;
	
	printf("Enter a Number n (height= 2n-1, width= n)");
	scanf("%d",&n);
	for(count=1; count<=n; count++){
		for(i=1; i<=count; i++){
			printf("*");
		}printf("\n");
	} 
//	printf("%d",i);
//	printf("%d",count);
	
	for(count=n-1; count>=1; count--){
//		printf("%d",count);
		for(i=1; i<=count; i++){
			printf("*");
	//		printf("%d",i);
	//		printf("\n");
	//		printf("%d",count);
		}
//printf("%d",i);
printf("\n");
 }	
return 0;
}

