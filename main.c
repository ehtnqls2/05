#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int cnt=0;
	
	printf("���ڿ��� �Է��ϼ���: ");
	
	while((c=getchar())!='\n')
	{
		if(c>47 && c<58)
			cnt=cnt+1;
	 } 
	
	printf("������ ������ %d���Դϴ�.",cnt);
	
		 
	return 0;
}
