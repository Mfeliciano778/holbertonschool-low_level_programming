#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - function that locates a substring.
 * @haystack: pointer you are searching for the substring
 * @needle: pointer that contains the substring
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int hindex, nindex;

	for (hindex = 0; *(haystack + hindex) != '\0'; hindex++)
	{
		for (nindex = 0; *(needle + nindex) != '\0'; nindex++)
		{
			if (*(haystack + hindex + nindex) != '\0')
			{
				if (*(haystack + hindex + nindex) !=
					*(needle + nindex))
						break;
			}
			else
				break;
		}
		if (*(needle + nindex) == '\0')
			return (haystack + hindex);
	}
	return (0);
}
