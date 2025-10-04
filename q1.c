#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,fact=1,i;
	printf("enter your number here : \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fact*=i;
	}
	printf("factorial of %d is %d",num,fact);
	return 0;
}
