#include <stdio.h>

int main() {
    int arr[100];
    
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int j=n-1; j>=0; j--){
        if(arr[j]%2==0){
            printf("%d ",arr[j]);
        }
    }
    return 0;
}