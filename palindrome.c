#include <stdio.h>
int main()
{
printf("Welcome to DataFlair tutorials!\n\n");
int number, number_reverse = 0, remainder, original_number;
printf("Enter an integer: ");
scanf("%d", &number);
original_number = number; // Storing the value of the number into a variable original_number
/* Reversing the number */
while( number!=0 )
{
remainder = number % 10;
number_reverse = number_reverse * 10 + remainder;
number /= 10;
}
// To check if the original number and the reversed number are equal or not
if (original_number == number_reverse)
printf("%d is a palindrome.\n", original_number);
else
printf("%d is not a palindrome.\n", original_number);
return 0;
}
