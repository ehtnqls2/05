#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum=0;
	int x,cnt;
	 
	printf("������ �Է��ϼ���:");
	scanf("%d",&x);
	
	for (cnt=0;cnt<=x;cnt++)
		sum=sum+cnt;
	 
	printf("%d",sum);
	
	return 0;
}
