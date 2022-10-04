#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int cnt=0;
	
	printf("문자열을 입력하세요: ");
	
	while((c=getchar())!='\n')
	{
		if(c>47 && c<58)
			cnt=cnt+1;
	 } 
	
	printf("숫자의 개수는 %d개입니다.",cnt);
	
		 
	return 0;
}
