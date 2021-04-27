#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int i = 0;
    while (n != 1)
    {
        n = n>>1;
        i++;
    }
    printf("%d",i);
    
}