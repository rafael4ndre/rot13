#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
  char text[101];
  char converted[101];
  int textSize;
 
  printf("::Insert the text to be converted::\n");
  fgets(text, 101, stdin);
  textSize = strlen(text);
  for(int i=0; i <textSize; i++){
    char tmp=text[i];
    if(tmp>'m' && tmp<='z' || tmp>'M' && tmp<='Z'){
      converted[i]=tmp-13;
    }else if (tmp>='a' && tmp<='m' || tmp>='A' && tmp <='M'){
      converted[i]=tmp+13;    
    }else{
      converted[i]=tmp;
    }
  }
  converted[textSize-1]='\0';

  printf("\n::The input text has %i characters::\n" ,textSize);
  printf("::The converted text is:: \n\n");

  puts(converted);

  return 0;
}
