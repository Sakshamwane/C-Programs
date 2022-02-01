#include <stdio.h>
/* Celsius to fahrenheit convertor program*/
int main(){
    int Celsius;
    printf("Celsius To Fahrenheit Convertor Table\n");
    for(Celsius=0; Celsius<=300; Celsius = Celsius + 20){
        printf("%d\t %d\n", Celsius, (Celsius * 9/5)+32);
    }

}