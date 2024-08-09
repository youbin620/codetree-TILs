#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, cnt=0;
    scanf("%d",&n);

    while(true){
        if(n==1){
            break;
        }
        if(n%2==0){
            n/=2;
        }
        else if(n%2==1){
            n=n*3+1;
        }
        cnt++;
        
    }
    printf("%d",cnt);
    return 0;
}