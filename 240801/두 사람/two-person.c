#include <stdio.h>

int main() {
    int o_1, o_2;
    char s_1, s_2;

    scanf("%d %c",&o_1,&s_1);
    scanf("%d %c",&o_2,&s_2);

    if((o_1 >= 19 && s_1 == 'M')||(o_2 >= 19 && s_2 == 'M')){
        printf("1");
    }
    else{
        printf("0");
    }
        
    return 0;
}