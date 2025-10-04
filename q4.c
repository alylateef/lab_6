#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0,b=1,c=0,i,n;printf("enter your number : \n"); scanf("%d",&n);
	printf("%d\t%d",a,b);
	for(i=1;i<=(n-2);i++){
		c = a+b;
		printf("\t%d",c);
		a=b;b=c;c=0;
	}
	return 0;
}
