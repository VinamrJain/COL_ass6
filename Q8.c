#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int val[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&val[i]);
    }
    int max = val[0];
    int min = val[0];
    int mi = 0;
    int ui = 0;
    for (int j = 1; j <=n-1 ; j++)
    {
        if (val[j]>max)
        {
            max = val[j];
            mi = j;
        }
        if (val[j]<min)
        {
            min = val[j];
            ui = j;
        }
    }
    int t = val[mi];
    val[mi] = val[ui];
    val[ui] = t;
    for (int k = 0; k < n; k++)
    {
        printf("%d ",val[k]);
    }
}