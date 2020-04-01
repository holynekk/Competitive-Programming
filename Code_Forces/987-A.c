

#include <stdio.h>
#include <math.h>

int main(void)
{
	int a ,b;
	scanf("%d %d",&a,&b);
	if (a == b || a == 2 && b == 4 || a == 4 && b == 2){
		printf("=");
		}else{
			log(a)/a > log(b)/b ? printf(">") : printf("<");
			}
	return 0;
}

