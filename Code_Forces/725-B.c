

#include <stdio.h>

int main()
{
	long long total = 0;
	long long k;
	char s;
	scanf("%lld%c",&k, &s);
	
	total += ((k+1) % 2)*6 + ((k-1)/4)*16 + ((k+1) % 2);
	switch(s){
		case('a'):
			total += 4;
			break;
		case('b'):
			total += 5;
			break;
		case('c'):
			total += 6;
			break;
		case('d'):
			total += 3;
			break;
		case('e'):
			total += 2;
			break;
		case('f'):
			total += 1;
			break;
		}
	printf("%lld",total);
	return 0;
}

