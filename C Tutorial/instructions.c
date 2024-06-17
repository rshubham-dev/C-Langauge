#include <stdio.h>
#include <math.h> // for maths formula

int main() {
// Instructions are statements in a program

// 1. Type declaration instruction - Declare variable before using it
// Valid statement
int a = 22;
int b = a;
int c = b + 1;
int d = 1, e;

// invalid statement
// int x = y = z = 4;

// 2. Arithmetic instructions - +, -, *, /, % ( Note - single variable on the LHS )
int x = 2, y = 4;
int sum = x + y;
int multiply = x * y;
int divide = x / y;
int subtract = x - y;
int m, n = x * y;

// int power = x^y; will be wrong way to get power 
// pow(x,y) for x to the power y 
int power = pow(x,y);
printf("%d", power);

// modular operator - It return remainder %
printf("%d", x%y);

/* Type conversion
int op int --> int (here op is operator, like - +, -, *, /)
int op float --> float
float op float --> float

Operator precedence (same like BODMAS rule)
 *, /, % --> Higher priority
 +, - --> 
 = -
Associativity ( for same precedence) - It calculate from left to right 
example :- x = 4 * 3 / 6 * 2; x = {(4 * 3) / 6 } * 2 
*/

/*3. Control instructions - used to determine flow of program

a. Sequence Control
b. Decision Control
c. Loop Control - to repeat some parts of the program
d. Case Control

*/




    
return(0);
};