#include "main.h"
#include "function_pointers.h"

/**
 * print_name - Imprime le nom en utilisant une fonction spécifiée
 * @name: Le nom à imprimer
 * @f: Un pointeur vers la fonction d'impression à utiliser
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
	{
		f(name);
	}
	else
	{
		return;
	}
}
