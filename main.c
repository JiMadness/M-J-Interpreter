#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "abstract.h"

void check(char*);

int main()
{
   char cmd[1000];
   char *token;
   printf("\t\t**Welcome to the 'M&J' interpreter V1.0**\n\n");
   while(1){
    printf("M&J>>> ");
    gets(cmd);
    token=strtok(cmd," ");
    while(token){
        check(token);
        token=strtok(NULL," ");
    }
   }
    return 0;
}
void check(char* input){
if(!strcmp(input,"exit"))
    exit(0);
//else if(strcmp(input,""))
}
