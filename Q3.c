#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    for (int i = 0; i <=31; i++)
    {
        sum += (n&1);
        n = n>>1;
    }
    printf("%d",sum);
}