#include <stdio.h>

int main() {
    int n,cnt=0;

    while(1){
        scanf("%d",&n);

        if(n%2==0){
            cnt++;
        }
        else if(n%2==1){
            continue;
        }
        printf("%d\n",n/2);
        
        if(cnt == 3){
            break;
        }
    }
    return 0;
}