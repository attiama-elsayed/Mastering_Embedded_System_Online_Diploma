/*
 * Homework5_Ex3.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Mahmoud Elsayed
 */

/*
 * Passing struct by reference
 */

#include <stdio.h>

#if 1
struct Complex
{
	float real;
	float imaginary;
};

struct Complex addNumbers(struct Complex, struct Complex);

int main(void)
{
	struct Complex first_number, second_number, result;

	printf("For 1st complex number\n");
	fflush(stdout);
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f", &first_number.real, &first_number.imaginary);
	fflush(stdin);

	printf("\nFor 2nd complex number\n");
	fflush(stdout);
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f", &second_number.real, &second_number.imaginary);
	fflush(stdin);

	result = addNumbers(first_number, second_number);
	printf("\nSum = %.1f + %.1fi\n", result.real, result.imaginary);

	return 0;
}

struct Complex addNumbers(struct Complex num1, struct Complex num2)
{
	struct Complex sum;
	sum.real = num1.real + num2.real;
	sum.imaginary = num1.imaginary + num2.imaginary;
	return (sum);
}
#endif

#if 0
/* struct with typedef complex */
typedef struct Complex
{
	float real;
	float imaginary;
} complex;

complex addNumbers(complex, complex);

int main(void)
{
	complex first_number, second_number, result;

	printf("For 1st complex number\n");
	fflush(stdout);
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f", &first_number.real, &first_number.imaginary);
	fflush(stdin);

	printf("\nFor 2nd complex number\n");
	fflush(stdout);
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f", &second_number.real, &second_number.imaginary);
	fflush(stdin);

	result = addNumbers(first_number, second_number);
	printf("\nSum = %.1f + %.1fi\n", result.real, result.imaginary);

	return 0;
}

complex addNumbers(complex num1, complex num2)
{
	complex sum;
	sum.real = num1.real + num2.real;
	sum.imaginary = num1.imaginary + num2.imaginary;
	return (sum);
}
#endif
