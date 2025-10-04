#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num,l_d,n_d=0,final=0,j;
	printf("enter the number  : \n");
	scanf(" %d",&num);
	int n_num=num;
	while(n_num>0){
		n_num/=10;
		n_d++;
	}
	n_num=num;
	while(n_num>0){
		int l=1;
		l_d=n_num%10;
		for(j=1;j<=(n_d);j++){
			l*=l_d;
		}
		final=l+final;
		n_num/=10;
		l_d=0;
		}
	if(num==(final)) 
	printf("number is armstrong ");
	else 
	printf("number is not armstrong");
	return 0;
}
