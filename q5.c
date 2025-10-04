#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,r_num=0,l_d;
	printf("enter your number here : \n");
	scanf("%d",&num);
	int n_num=num;
	while(n_num>0){
		l_d=n_num%10;
		r_num=(r_num+l_d)*10;
		n_num/=10;
	}
	if(r_num/10==num) 
	printf("Palindrome ");
	else 
	printf("not Palindrome");
	return 0;
}
