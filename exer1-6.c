#include <stdio.h>
/* Program to verify that the expression getchar() != EOF is 0 or 1*/
int main(){
    int x;
    while((x=getchar()) != EOF){
        putchar(x);
    }
}