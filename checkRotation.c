#include <stdio.h>
#include <string.h>

int main()
{
  char inputString1[100];
  char inputString2[100];
  printf("Enter the input string1:\n");
  scanf("%s", inputString1);

  printf("Enter the input string2:\n");
  scanf("%s", inputString2);

  int len1=strlen(inputString1);
  int len2=strlen(inputString2);

  if(len1!=len2){
    printf("NO");
    return 0;
  }

  int firstIndex=-1;
  for(int index=0; index<len1; index++){
     if(inputString1[index]==inputString2[0]){
        firstIndex=index;
        break;
     }
  }

  if(firstIndex==-1){
    printf("NO");
    return 0;
  }
  
  for(int index=0; index<len2; index++){
      if(inputString2[index]!=inputString1[firstIndex%len1]){
        printf("NO");
        return 0;
      }
      firstIndex++;
  }

  printf("YES");
  return 0;

}
