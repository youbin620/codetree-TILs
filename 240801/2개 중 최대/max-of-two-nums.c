#include <stdio.h>

int main() {
    int a,b,c;

    scanf("%d %d",&a,&b);
    c = a<b ? b : a;
    printf("%d",c);
    return 0;
}