#include <stdio.h>

int main() {
    int arr[10];
    int n=0;

    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            break;
        }  
        n++;
    }
    for(int i=n-1; i>=0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}