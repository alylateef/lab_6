#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum_e=0,sum_o=0,i;
	for(i=1;i<=20;i++){
		if(i%2==0)
		sum_e+=i;
		else
		sum_o+=i;
	}
	printf("the sum of even : %d\nthe sum of odd : %d",sum_e,sum_o);
	return 0;
}
