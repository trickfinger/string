#include <stdio.h>
#define STR_LEN 100
int myStrLen(const char str[]);
int myStrLenAlNum(const char str[]);
void myStrCat(str[], const str1[], const str2[])	
int main (){
	char texto[STR_LEN+1];
	char texto2[STR_LEN+1] = 'texto2';
	char texto3[STR_LEN+1] = 'texto3';

	scanf("%[^n%*c", texto);
	printf("%d\n", myStrLen(texto));
	printf("%d\n", myStrLenAlNum(texto));
	printf("%d\n", myStrCat(texto));
	return(0);
}

int myStrLen(const char str[]){
	 int cont, i;

	for(i=0;str[i] != '\0';i++)

	return(i)
}

int myStrLenAlNum(const char str[]){
	 int cont = 0, i;

	 for (i = 0; str[i] != '\0'; i++){
	 	if (isalnum(str[i]))
	 		cont ++
	}
		return(cont);
}

void myStrCat(str[], const str1[], const str2[]){
	int i, size = 0;

	for (i = 0; str1[i] != '\0'; i++){
		str[size] = str1[i];
		size++;
	}

	str[size++] = '';
		for (i = 0; str2[i] != '\0'; i++){
		str[size] = str2[i];
		size++;
	}
}
