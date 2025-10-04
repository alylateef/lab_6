#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char dec;int num,i;
	do{
		printf("enter the number : \n");
		scanf("%d",&num);
		for(i=1;i<=10;i++){
			printf("%d x %d = %d\n",num,i,num*i);
		}
		printf("Do you want to print another table (Y-YES/N-NO) \n");
		scanf(" %c",&dec);
		{
			if(dec!='Y' && dec!='N'){
				printf("enter valid decision \n");
				printf("Do you want to print another table (Y-YES/N-NO) \n");
				scanf(" %c",&dec);
			}
		}
	}while(dec!='N');
	return 0;
}
