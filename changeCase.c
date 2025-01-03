#include <stdio.h>
#include <string.h>

int main()
{
  char inputString[100];
  printf("Enter the input string:\n");
  fgets(inputString, 100, stdin);
  int len = strlen(inputString);
  inputString[len - 1] = '\0';

  for (int index = 0; inputString[index] != '\0'; index++)
  {
    char currentChar = inputString[index];

    if (currentChar >= 'A' && currentChar <= 'Z')
    {
      inputString[index] = currentChar + 32;
    }
    else if (currentChar >= 'a' && currentChar <= 'z')
    {
      inputString[index] = currentChar - 32;
    }
  }

  printf("%s", inputString);
  return 0;
}
