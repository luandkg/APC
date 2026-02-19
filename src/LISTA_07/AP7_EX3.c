#include <stdio.h>

#include <stdlib.h>

#include <string.h>


/Copia a string str1 para a str2 sem o ultimo caractere/

void copyString(char *str1, char*str2) {

	int n = strlen(str1), i;

	for(i=0;i<n-1;i++){

		str2[i] = str1[i];

	}

	str2[i] = '\0';

}


int main () {

	FILE *fp1, *fp2;

	char nomeArquivo[30], nomeArquivoNovo[30], string_lida[100], aux[100]; 

	int cod, flag=0;

	float media=0;

	printf("Informe o nome do arquivo do programa anterior: ");

	scanf("%s", nomeArquivo);

	fp1 = fopen(nomeArquivo, "r+");

	printf("Informe o nome do arquivo que ira calcular as medias: ");

	scanf("%s", nomeArquivoNovo);

	fp2 = fopen(nomeArquivoNovo, "w");


	if (fp1 != NULL) {

		while (fscanf(fp1, "%s", string_lida) > 0) {

			if(string_lida[(strlen(string_lida)-1)] == ',' || string_lida[(strlen(string_lida)-1)] == '.') {

				if(flag == 0) {

					flag=1;

				} else {

					copyString(string_lida, aux);

					cod = atoi(aux);

					fscanf(fp1, "%s", string_lida);

					copyString(string_lida, aux);

					media += atof(aux);

					fscanf(fp1, "%s", string_lida);

					copyString(string_lida, aux);

					media += atof(aux);

					fscanf(fp1, "%s", string_lida);

					copyString(string_lida, aux);

					media += atof(aux);

					fprintf(fp2, "%d, %.2f.\n", cod, media/3);

					media = 0;

					flag=0;

				}

			}

		}

		printf("Fim do programa\n");

		fclose(fp2);

	} else {

		printf("Arquivo nao encontrado!\nFim do programa\n");

	}

	fclose(fp1);

	return 0;

}
