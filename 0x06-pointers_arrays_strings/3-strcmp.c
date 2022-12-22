#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: value less than 0 if string is less then the other
 * value greater than 0 if string is greatervthen the other
 * 0 if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int counter, comStr;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	comStr = s![counter] -s2[counter];
	return (comStr);
}
