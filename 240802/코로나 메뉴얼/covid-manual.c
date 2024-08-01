#include <stdio.h>

int main() {
    int n1,n2,n3;
    char cold1,cold2,cold3;

    scanf("%c %d\n",&cold1,&n1);
    scanf("%c %d\n",&cold2,&n2);
    scanf("%c %d\n",&cold3,&n3);

    if(n1>=37 && cold1 == 'Y'){
        if((n2>=37 && cold2 == 'Y')||(n3>=37 && cold3 == 'Y')){
            printf("E");
        }
        else{
            printf("N");
        }
    }
    else{
        if((n2>=37 && cold2=='Y')&&(n3>=37 && cold3 == 'Y')){
            printf("E");
        }
        else{
            printf("N");
        }
    }
    return 0;
}