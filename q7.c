#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pass;
	while(1){
		printf("enter the password :\n");
		scanf("%d",&pass);
		if(pass==1234){
			printf("your password is correct \n");
			break;
		}
		printf("wrong password\tenter again \n");
	}
	return 0;
}
