#include <stdio.h>
 
int main()
{
    long long n;
    scanf("%lld", &n);
    printf("%lld ", n);
    while(n>1){
        if(n&1){
            n  = 3 * n + 1;
            printf("%lld ", n);
        }else{
            n >>= 1;
            printf("%lld ", n);
        }
    }
 
    return 0;
}
