#include <stdio.h>
revnum()
{
printf("Welcome to DataFlair tutorials!\n\n");
int number, number_reverse, remainder;
number_reverse = 0; // initializing number_reverse to 0
printf("Enter a number in the form of an integer: ");
scanf("%d", &number);
while(number != 0)
{
remainder = number%10;
number_reverse = number_reverse*10 + remainder;
number = number/10;
}
printf("The reversed number is: %d\n", number_reverse);
//return 0;
}
