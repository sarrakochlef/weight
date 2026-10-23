#include <stdio.h>
int main(){
    float lbs,kg;
    printf("Enter weight in pounds (lbs): ");
    scanf("%f",&lbs);
    kg=lbs*0.453592;
    printf("Weight in kilograms: %.2f kg\n",kg);
    return 0;
}
