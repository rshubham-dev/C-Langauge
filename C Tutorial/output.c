#include <stdio.h> 

int main() 
{
    printf("Hello World! \n");
    printf("Lets get started \n");
    /* pintf() used for printing output of the code,
    "\n" to print output in new line
    */
   

   // Output case / Formate Specifier

   //1. integer - %d
   int age = 20;
   printf("age is %d \n", age);

   //2. real numbers - %f
   float pi = 3.14;
   printf("value of pi is %f \n", pi);

   //3. characters - %c
   char star = '*';
   printf("star looks like this %c \n", star);

    return 0;
};