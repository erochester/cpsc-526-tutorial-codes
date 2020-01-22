#include<stdio.h>
#include<string.h>

int main(){

  char str[50];

  strcpy(str, "Function is part of string.h library");
  puts(str);

  memset(str, '%', 12);
  puts(str);

  return 0;

}
