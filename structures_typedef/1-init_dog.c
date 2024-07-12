#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a dog structure.
 * @d: Pointer to the dog structure to be initialized.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the name of the owner.
 *
 * Description: This function initializes a variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d != NULL)
        {
                d->name = name;
                d->age = age;
                d->owner = owner;
        }
}

