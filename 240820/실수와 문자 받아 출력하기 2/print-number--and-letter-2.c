#include <stdio.h>

int main() {
    double x,y;
    char s;

    scanf("%c %lf %lf",&s,&x,&y);
    printf("%.2lf\n",y);
    printf("%.2lf\n",x);
    printf("%c",s);
    return 0;
}