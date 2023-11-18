#include <stdio.h>
main()
{
    char x;
	printf("Enter a character : ");
	scanf("%c",&x);
	if (x =='a' || x == 'e' || x == 'i' || x == 'o' || x == 'e' || x == 'u')
		printf("Character is a vowel");
	else
		printf("Character is not a vowel");

	return 0;
}
