#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b;
    scanf("%d %d",&a,&b);

    bool satisfied = false;

    for(int i=a; i<=b; i++){
        if(1920%i==0 && 2880%i==0){
            satisfied = true;
        }
    }
    if(satisfied == true){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}