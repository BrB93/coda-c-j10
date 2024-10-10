#include <stdio.h>


int main()
{
	FILE *fp = fopen("exercice1.txt", "r");

	if (fp == NULL)
	{
		printf("Le fichier n'a pas pu etre ouvert\n");
	}

	printf("Le fichier existe\n");
	fclose(fp);
	return 0;
}