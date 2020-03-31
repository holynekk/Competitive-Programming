#include<stdio.h>
#include<math.h>
int main(){

    int a,b;
    scanf("%d %d",&a,&b);
    printf("%f",(pow(b,2)-pow(a,2))/(2*a));

    return 0;
}
