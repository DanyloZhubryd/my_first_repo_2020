#include <stdio.h>;
#include <malloc.h>;
#define LENGTH 12


void SPACE_ERASER(char* STRING, char* STRING2)
{
	int k = 0;
	char* NEW_STRING = (char*)malloc(LENGTH * sizeof(char));
	for (int i = 0; i <= LENGTH; i++)
	{
		if (STRING[i] != ' ')
		{
			NEW_STRING[i-k] = STRING[i];
		}
		else k += 1;
	}
	printf("Result: %s\n", NEW_STRING);
	STRING2 = NEW_STRING;
	free(NEW_STRING);
}

int main()
{
	char str[LENGTH];
	char* str2 = (char*)malloc(LENGTH * sizeof(char));;
	printf("Enter string: ");
	fgets(str, LENGTH, stdin);
	printf("%s\n", str);
	SPACE_ERASER(str, str2);
	printf("Result 2: %s\n", str2);
}

