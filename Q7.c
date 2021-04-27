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
    for (int j = 1; j <=f ; j++)
    {   int t = val[0];
        val[0] = val[n-1];
        for (int k = 1; k <=n-2; k++)
        {
            val[n-k] = val[n-(k+1)];
        }
        val[1]=t;
    }
    for (int p = 0;p <n; p++)
    {
        printf("%d ",val[p]);
    }
    
}
