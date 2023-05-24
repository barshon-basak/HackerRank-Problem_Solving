#include <stdio.h>

int main() {
    int n,k;
    scanf("%d",&n);
    unsigned long long int t[n],r=0;
    
    for(k=0;k<n;k++)
        {
        scanf("%lld",&t[k]);
        }
    for(k=0;k<n;k++)
        {
        r=r+t[k];
        }
    printf("%lld",r);
    return 0;
}
