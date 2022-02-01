// Difference b/w bitwise AND operator(&) and Logical AND operator(&&).
#include <stdio.h>

int main(){
    char x =1, y =2;
    if(x&y){ // 1=00000001, 2=00000010 1&2=00000000
        printf("Result of x&y is 1");
    }
    if(x&&y){ // 1&&2 TRUe&&TRUE = TRUE = 1 
        printf("Result of x&&y is 1");
    }
    return 0;
}