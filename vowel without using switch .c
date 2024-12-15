#include <stdio.h>
#include <string.h>

int isVowel(char ch)
{
  char vowels[] = "aeiouAEIOU";
	return (strchr(vowels, ch) != NULL);
}


int main()
{
  char ch;
  printf("ENTER ANY CHARACTER : ");
  scanf("%c",&ch);
	if (isVowel(ch))
		printf("It is vowel\n");
	else
		printf("It is consonant\n");
	return 0;
}
