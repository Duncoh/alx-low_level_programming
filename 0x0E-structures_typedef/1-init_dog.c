#include <stdio.h>
#include "dog.h"

/**
* init_dog - a function taht initializes a variable
* of type struct dog,
* followed by a new line.
*
*@x: name of struct
*@name: Name of Dog.
*@age: Age of Dog.
*@owner: owner of Dog.
* Return: Always 0 (success)
*/

void init_dog(struct dog *x, char *name, float age, char *owner)
{
	if (x)
	{
		x->name = name;
		x->age = age;
		x->owner = owner;
	}
	else
	{
		return;
	}
}
