#include <stdio.h>

int main() {
    int arr[10];
    int sum_value = 0, cnt=0;
    double avg;

    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            break;
        }
        sum_value += arr[i];
        cnt++;
    }
    avg = (double)sum_value/cnt;
    printf("%d %.1lf",sum_value,avg);
    return 0;
}