#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,p,i,result=1;
	printf("enter the number and power : \n");
	scanf(" %d %d",&num,&p);
	for(i=1;i<=p;i++){
		result*=num;
	}
	printf("%d to the power %d = %d",num,p,result);
	return 0;
}
