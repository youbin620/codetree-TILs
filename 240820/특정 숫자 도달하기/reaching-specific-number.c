#include <stdio.h>

int main() {
    int arr[10];
    int sum_val=0, cnt=0;

    for(int i=0; i<10; i++){
        scanf("%d ",&arr[i]);
        if(arr[i]>=250){
            break;
        }
        sum_val += arr[i];
        cnt++;
    }
    printf("%d ",sum_val);
    printf("%.1lf",(double)sum_val/cnt);
    return 0;
}