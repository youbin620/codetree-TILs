#include <stdio.h>

int main() {
    int n, sum = 0, cnt=0;

    while(1){
        scanf("%d",&n);

        if(n<20||n>29){
            break;
        }
        sum+=n;
        cnt++;
    }
    printf("%.2lf",(double)sum/cnt);
    return 0;
}