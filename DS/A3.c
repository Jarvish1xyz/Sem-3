#include<stdio.h>

int main() {
    char abc;

    printf("Enter a char : ");
    scanf(" %c", &abc);

    if(abc=='a' ||abc=='e'||abc=='i' ||abc=='o'||abc=='u') {
        printf("entered char is vowel");
    }
    else {
        printf("entered char is not vowel");
    }
}