#include <stdio.h>
int main(){
 FILE*fp;
 fp=fopen("data.txt","a");
 if(fp==NULL){
 printf("file cannot be opened!\n");
 return 1;
 }
 fprint(fp,"this line is appended at the end.\n");
 fclose(fp);
 printf("data appended succeessfully.\n");
 return 0;
 }
