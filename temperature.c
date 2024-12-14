#include <stdio.h> 

float fahrenheit_to_celsius(float f) 
{ 
	return ((f - 32.0) * 5.0 / 9.0); 
} 


float celsius_to_fahrenheit(float c) 
{ 
	return (c*(9.0/5.0)+32.0); 
} 

int main() 
{ 
	float f,c; 
	printf("ENTER THE VALUE OF Fahrenheit :");
	scanf("%f",&f);
	printf("Temperature in Degree Celsius : %0.2f",fahrenheit_to_celsius(f)); 
	printf("\n ENTER THE VALUE OF celcius :");
	scanf("%f",&c);
	printf("Temperature in Degree Fahrenheit : %0.2f",celsius_to_fahrenheit(c)); 
	return 0; 
}
/*FORMULA FOR CONVERSION
°F = (°C × 9/5) + 32
°C = (°F − 32) x 5/9 */
