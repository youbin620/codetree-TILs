#include <stdio.h>

int main() {
    int arr[10];
    int sum_val, val;
    sum_val = 0;

    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
        sum_val += arr[i];
    }
    printf("%d",sum_val);

    return 0;
}