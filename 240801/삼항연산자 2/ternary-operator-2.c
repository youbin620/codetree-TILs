#include <stdio.h>

int main() {
    int a;
    char b;

    scanf("%d",&a);
    b = (a==1)?'t':'f';
    printf("%c",b);
    return 0;
}