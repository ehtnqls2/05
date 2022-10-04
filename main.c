#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z;
	char c;
	
	printf("연산식을 입력해주세요:");
	scanf("%d %c %d",&x,&c,&y);
	
	if(c=='+')
		z=x+y;		
	else if(c=='-')
		z=x-y;
	else if(c=='*')
		z=x*y;
	else if(c=='/')
		z=x/y;
		
	printf("결과는 %d입니다.",z);
		 
	return 0;
}
