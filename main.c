#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z;
	char c;
	
	printf("������� �Է����ּ���:");
	scanf("%d %c %d",&x,&c,&y);
	
	if(c=='+')
		z=x+y;		
	else if(c=='-')
		z=x-y;
	else if(c=='*')
		z=x*y;
	else if(c=='/')
		z=x/y;
		
	printf("����� %d�Դϴ�.",z);
		 
	return 0;
}
