/*
     time duration:5mint;
    13. Given a character C. Determine the character is a vowel or consonant.
*/
#include<stdio.h>

int main(){
  char ch;
  scanf("%c",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    printf("%c is a vowel.\n",ch);
  }
  else{
    printf("%c is a consonant.\n",ch);
  }
  return 0;
}
