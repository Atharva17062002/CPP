#include<stdio.h>
 
int main()
{
   char word1[1]='a';
   char word2[1]='b';
   char word3[1]='c';
   char word4[100]= word1 +word2;
   printf("%c",word4);
   word1= word2;
   word2=word3;
   word3= word1;
   printf("%c",word4);
    return 0;
}
