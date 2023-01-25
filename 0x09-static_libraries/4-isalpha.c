#include "main.h"
/**
 * _isalpha - checks for lowercase
 * @c: an argument
 * Return: 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
