#ifndef DOG_H
#define DOG_H

/**
* struct dog - a function that creates dog,
* followed by a new line.
*
* @name: name of dog.
* @age: age of dog.
* @owner: owner of dog.
* Return: 0
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
