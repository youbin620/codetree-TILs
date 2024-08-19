#include <stdio.h>

int main() {
    int arr[10];
    int sum_value=0,cnt=0;
    double avg;

    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            scanf("%d",&arr[i]);
            sum_value += arr[i];
        }
        avg = (double)sum_value/4;
        
        if(avg>=60){
            printf("pass\n");
            cnt++;
        }
        else{
            printf("fail\n");
        }
        sum_value = 0;
    }
    printf("%d",cnt);
    return 0;
}