#include <stdio.h>

int main() {
    int a_m,a_e,b_m,b_e;

    scanf("%d %d",&a_m,&a_e);
    scanf("%d %d",&b_m,&b_e);

    if(a_m>b_m){
        printf("A");
    }
    else if(a_m<b_m){
        printf("B");
    }

    if(a_m == b_m){
        if(a_e>b_e){
            printf("A");
        }
        else{
            printf("B");
        }
    }
    return 0;
}