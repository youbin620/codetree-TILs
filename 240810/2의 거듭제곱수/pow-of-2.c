#include <stdio.h>

int main() {
    int n,x;
    int cnt=0;

    scanf("%d",&n);

    while(1){
        n/=2;
        
        if(n==0){
            break;
        }
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}