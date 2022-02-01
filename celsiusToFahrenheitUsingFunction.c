#include <stdio.h>
/*Program for celsius to fahrenheit coneversion using function*/
int main(){
    celsiusToFahrenheit();
}

int celsiusToFahrenheit(){
    int celsius, fahrenheit;
    for(celsius= 0; celsius<=300; celsius+=20){
        fahrenheit = (celsius * 9/5) + 32;
        printf("%d %d \n", celsius, fahrenheit);
    }
}