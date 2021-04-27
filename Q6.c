#include <stdio.h>
void main(){
    int n,f;
    scanf("%d",&n);
    int val[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&val[i]);
    }
    scanf("%d",&f);
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        if (val[j]==f)
        {
            sum++;
        }
    }
    printf("%d",sum);
}