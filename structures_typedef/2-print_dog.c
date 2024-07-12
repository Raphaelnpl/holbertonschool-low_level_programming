#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a dog.
 * @d: The dog structure to be printed.
 *
 * Description: This function prints the details of a dog structure,
 *              including the dog's name, age, and owner. If any of the
 *              elements of the structure are NULL, it prints (nil) instead.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
