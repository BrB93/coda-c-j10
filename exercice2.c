#include <stdio.h>

int main()
{
	FILE *fp = fopen("exercice2.txt", "w+");

	if (fp == NULL)
	{
		printf("Le fichier n'existe pas\n");

	}


	fprintf(fp, "Frêre Jacques, frêre Jacques\n");
	fprintf(fp, "Dormez-vous, dormez-vous ?\n");

	

	fclose(fp);
	
	return 0;
}