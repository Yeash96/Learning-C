#include <stdio.h>
#include <string.h>
int main (void){
	char string[100];
	int i=1;
	int size;
	printf("Please enter string: ");
	scanf("%s",string);
	size = strlen(string);
	//printf("You have entered:  %c \n",string);
	while (i<size+1){
       /*    	printf("--\n");
	*	printf("%d \n", i);
	*	printf("%d \n", size);	
	*	printf("--\n");
	*	printf("%c \n" ,string[size-i]);
	*/	printf("%c", string[size-i]);
		i++;
 }
	printf("\n");	
return 0;
}
