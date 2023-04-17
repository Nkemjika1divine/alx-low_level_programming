#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: parameter to check
 *
 * Return: length of the string
 */

int _strlen(char *s)

{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * *_strcpy - copies the string pointed to by src including the terminating
 * null byte (\0) to the buffer pointed to by dest
 *
 * @dest: this points to where the string will be copied
 * @src: copy this string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int a, b;
/*a is an int representing lenght of array*/
/*b represents the element in the array pointed to*/
	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: (Success) if it pointsto new dog, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
