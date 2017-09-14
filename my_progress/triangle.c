#include <stdio.h>

void  triangle(int l){
	int i;
	for(i=1; i<=l; i++) {
		printf("*");
	} return;
}

int main(){
	int l, z;
	printf("Enter a number for an isosceles triangle");
	scanf("%d",&l);
	for (z=1; z<=l; z++){
		triangle(z);
	printf("\n");
}
	return 0;
}







