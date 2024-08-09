#include <stdio.h>

int main() {
    int n, sum = 0, cnt=0;

    while(1){
        scanf("%d",&n);

        if(n/10 >= 3 || n/10 == 1){
            break;
        }
        sum+=n;
        cnt++;
    }
    printf("%.2lf",(double)sum/cnt);
    return 0;
}