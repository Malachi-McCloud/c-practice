//First Version no floating point integers so outputs are inaccurate

// #include <stdio.h>

// /* Print farenheit-celsius table for 0 -> 300 */

// main()
// {
//     int fahr, celsius;
//     int lower, upper, step;

//     lower = 0; // Lower limit of temp table
//     upper = 300; // Upper limit of the temp table
//     step = 20; // increment or step within the table

//     fahr = lower;
//     while (fahr <= upper) {
//         celsius = 5 * (fahr-32) / 9;
//         printf("%d\t%d\n", fahr, celsius);
//         fahr = fahr + step;

//     }

// }

// Version 2 ===================================================

#include <stdio.h>
/* Print the Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300; floating-point version */

 main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; // Lower limit of the temperature table
    upper = 300; // Upper Limit
    step = 20; // step size

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
 }

 // Numeric Rules
 /*
 %d     prints as decimal integer
 %6d    prints as decimal integer atleast 6 characters wide
 %f     prints as floating point
 %6f    prints as floating point atleast 6 characters wide
 %.2f   prints as floating point 2 charcters after decimal point
 %6.2f  prints as floating point at least 6 wide 2 after decimal point*/