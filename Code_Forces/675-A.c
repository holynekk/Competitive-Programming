#include<stdio.h>

int main(){
	
	int a, b ,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a == b){
		printf("YES");
	}else{
		if (a > b){
			if (c > 0){
				printf("NO");
				}else{
					if ((a-b) % c == 0){
						printf("YES");
						}
					else{
						printf("NO");
						}
					}
			}else if(a < b){
				if (c < 0){
					printf("NO");
					}else{
						if ((a-b) % c == 0){
							printf("YES");
							}else{
								printf("NO");
								}
						}
				}
		}
	return 0;
}
