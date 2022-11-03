/*
 * Homework5_Ex1.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

struct student
{
	char name[10];
	int roll;
	float marks;
};

int main(void)
{
	struct student info;

	printf("Enter information of students:\n\n");

	printf("Enter name: ");
	fflush(stdout);
	scanf("%s", info.name);
	fflush(stdin);

	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d", &info.roll);
	fflush(stdin);

	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f", &info.marks);
	fflush(stdin);

	printf("\nDisplay Information\n");
	printf("Name: %s\n", info.name);
	printf("Roll: %d\n", info.roll );
	printf("Marks: %.2f\n", info.marks);

	return 0;
}
