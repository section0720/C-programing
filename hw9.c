#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return 0;
}
int main()
{
	char ch[50];
	int i;
	printf("input> ");
	fgets(ch, sizeof(ch), stdin);
	for (i = 0; i < strlen(ch)-1; i++)
	{
		ch[i] = convCase(ch[i]);
	}
	printf("ouput>");
	puts(ch);
}