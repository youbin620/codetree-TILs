#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d",&n);

    bool satisfied = false;
    for(int i=2; i<=n-2; i++){
        if(n%i==0){
            satisfied = true;
        }
    }
    if(satisfied = true){
        printf("C");
    }
    else{
        printf("N");
    }
    return 0;
}