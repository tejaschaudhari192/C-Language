#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ING 5

// Struct to hold an ingredient and its date of addition
struct Ingredient
{
	char name[20];
	int day;
	int month;
	int year;
} Ingredient;

bool is_valid_date(int day, int month, int year)
{
	if (year < 0 || year > 99 || month < 1 || month > 12 || day < 1)
	{
		return false;
	}

	int max_days;
	if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
		max_days = 30;
	else
		max_days = 31;

	return day <= max_days;
}

int main()
{
	struct Ingredient storage[MAX_ING];
	int num_ing = 0;

	// Initialize storage with empty ingredients
	for (int i = 0; i < MAX_ING; i++)
	{
		strcpy(storage[i].name, "");
		storage[i].day = 0;
		storage[i].month = 0;
	}

	printf("Welcome to the restaurant's inventory management system!\n\n");

	// Loop to add ingredients to the storage
	while (1)
	{
		char input[20];
		printf("Enter an ingredient name to add to storage (or 'exit' to quit): ");
		scanf("%s", input);

		// Exit the loop if the user enters 'exit'
		if (strcmp(input, "exit") == 0)
			break;

		// Check if the storage is full
		if (num_ing >= MAX_ING)
		{
			printf("Storage is full. Removing the oldest ingredient using the FIFO algorithm.\n");
			// Use FIFO algorithm to remove the oldest ingredient
			struct Ingredient oldest_ing = storage[0];

			for (int i = 1; i < MAX_ING; i++)
			{
				if (storage[i].year < oldest_ing.year ||
					(storage[i].year == oldest_ing.year && storage[i].month < oldest_ing.month) ||
					(storage[i].year == oldest_ing.year && storage[i].month == oldest_ing.month && storage[i].day < oldest_ing.day))
				{
					oldest_ing = storage[i];
				}
			}

			printf("Removing %s from storage (added on %d/%d/%d)\n", oldest_ing.name, oldest_ing.day, oldest_ing.month, oldest_ing.year);
			// Shift the remaining ingredients to the left
			for (int i = 0; i < MAX_ING - 1; i++)
			{
				storage[i] = storage[i + 1];
			}
			num_ing--;
		}

		// Add the new ingredient to the storage
	
		struct Ingredient new_ing;
		strcpy(new_ing.name, input);
	enter_date:
		printf("Enter the date when %s was added to storage (DD/MM): ", new_ing.name);
		scanf("%d/%d/%d", &new_ing.day, &new_ing.month, &new_ing.year);

		if (is_valid_date(new_ing.day, new_ing.month, new_ing.year))
		{
			storage[num_ing] = new_ing;
		}
		else
		{
			printf("The date you entered is not valid.\n");
			goto enter_date;
		}

		num_ing++;
	}

	printf("\nFinal storage contents:\n");
	for (int i = 0; i < num_ing; i++)
	{
		printf("%s (added on %d/%d)\n", storage[i].name, storage[i].day, storage[i].month);
	}

	return 0;
}
