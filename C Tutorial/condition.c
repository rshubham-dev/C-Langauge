#include <stdio.h>

int main() {

// Conditional Statement
//Types - if-else, if else if, switch
/* if-else
a. Nested if-else (if-else inside if-else) are allowed
if(condition){
    //do something if true
} else {
    //do something if false
} */
/* if-else
if(condition 1){
    //do something if true
} else if (condition 2){
    //do something if 1st is false & 2nd is true 
} else {
    //do something if false
} */

int age;
printf("enter age : ");
scanf("%d", &age);

if(age >= 18){
    printf("adult \n");
}
else if(age > 13 && age < 18){
    printf("teenager \n");
}
else {
    printf("not adult \n");
}

/* Ternary operator :-
Condition ? doSomething if true : doSomething if false;
*/
age >= 18 ? printf("Adult") : printf("Not Adult");

/* Switch :-
a. Cases can be in any order
b. Nested switch (switch inside switch) are allowed
switch(expression){
    case Case1: //do something
    break;
    case Case2: //do something
    break;
    default: // do something
}
*/
int day;
printf("enter day(1-7) : ");
scanf("%d", &day);

switch (day)
{
case 1: printf("monday \n");
    break;
case 2: printf("tuesday \n");
    break;
case 3: printf("wednesday \n");
    break;
case 4: printf("thursday \n");
    break;
case 5: printf("friday \n");
    break;
case 6: printf("saturday \n");
    break;
case 7: printf("sunday \n");
    break;
default: printf("not a valid day! \n");
}


return(0);
};