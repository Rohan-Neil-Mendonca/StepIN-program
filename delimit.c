#include <string.h>
#include <stdio.h>
int main () {
   char string[100] = "my_name_is_edcast_future_skills";
   const char s[2] = "_";
   char *t1;
   t1 = strtok(string, s);     // using string function strtok to tokenize strings
   while( t1 != NULL ) {
      printf( " %s ", t1 );
      t1 = strtok(NULL, s);
   }

   return(0);
}
