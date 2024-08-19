#include <stdio.h>

int main() {
    double arr[8];
    double sum_value;

    for(int i=0; i<8; i++){
        scanf("%lf ",&arr[i]);
        sum_value += arr[i];
    }
    printf("%.1lf",sum_value/8);
    return 0;
}