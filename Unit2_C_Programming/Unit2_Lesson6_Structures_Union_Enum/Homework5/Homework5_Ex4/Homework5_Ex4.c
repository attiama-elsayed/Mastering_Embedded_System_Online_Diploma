/*
 * Homework5_Ex4.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

struct SStudent
{
	char m_Name[50];
	int m_Roll;
	float m_Marks;
};

int main(void)
{
	struct SStudent student[10];
	int i;

	printf("Enter information of students:\n\n");
	fflush(stdout);

	for(i = 0; i < 10; i++)
	{
		student[i].m_Roll = i + 1;
		printf("For roll number %d\n", student[i].m_Roll);
		fflush(stdout);
		printf("Enter name: ");
		fflush(stdout);
		scanf("%s", student[i].m_Name);
		fflush(stdin);
		printf("Enter marks: ");
		fflush(stdout);
		scanf("%f", &student[i].m_Marks);
		fflush(stdin);
		printf("\n");
		fflush(stdout);
	}

	printf("Displaying information of students:\n\n");
	fflush(stdout);

	for(i = 0; i < 10; i++)
	{
		student[i].m_Roll = i + 1;
		printf("Information for roll number %d\n", student[i].m_Roll);
		fflush(stdout);
		printf("Name: %s\n", student[i].m_Name);
		fflush(stdout);
		printf("Marks: %.2f\n\n", student[i].m_Marks);
		fflush(stdout);
	}

	return 0;
}
