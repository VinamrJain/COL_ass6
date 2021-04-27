#include <stdio.h>
int one(int n){
    int sum = 0;
    for (int i = 0; i <=31; i++)
    {
        sum += (n&1);
        n = n>>1;
    }
    return sum;
}
void main(){
    int a,b;
    scanf("%d%d",&a,&b);
printf("%d",one(a|b)-one(a&b));
}