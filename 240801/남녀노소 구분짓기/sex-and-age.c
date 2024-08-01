#include <stdio.h>

int main() {
    int sex, age;
    
    scanf("%d %d",&sex,&age);
    if(sex==0){
        if(age>=19){
            printf("MAN");
        }
        else{
            printf("BOY");
        }
    }
    else if(sex==1){
        if(age>=19){
            printf("WOMAN");
        }
        else{
            printf("GIRL");
        }
    }
    return 0;
}