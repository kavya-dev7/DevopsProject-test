#include <stdio.h>
int main()
{
printf("Welcome to DataFlair tutorials!\n\n");
int number_of_terms, iteration;
int term1 = 0, term2 = 1, next_term;
printf("Enter the number of terms till you want to display the numbers in the Fibonacci series: ");
scanf("%d", &number_of_terms);
printf("The Fibonacci series up till %d terms is: ",number_of_terms);
for (iteration = 1; iteration <= number_of_terms; iteration++)
{
printf("%d ", term1);
next_term = term1 + term2; // Next term is the sum of previous terms
term1 = term2;
term2 = next_term;
}
return 0;
}
