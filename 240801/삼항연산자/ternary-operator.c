#include <stdio.h>

int main() {
    int score;
    char* grade;

    scanf("%d",&score);
    grade = (score == 100) ? "pass" : "failure";
    printf("%s\n",grade);

    return 0;
}