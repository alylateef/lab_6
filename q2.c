#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,c=0,i;
	printf("enter your number : \n");
	scanf("%d",&num);
	for (i=2; i<=(num);i++){
		if(num%i==0) c++;
	}
	if(c==1){
		printf("number is prime \n");
	}
	else{
		printf("number is not prime \n");
	}
	return 0;
}
