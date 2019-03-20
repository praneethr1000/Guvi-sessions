# include <stdio.h> 

void reverse(char *a) 
{ 
   if(*a) 
   { 
       reverse(a+1); 
       printf("%c",*a); 
   } 
} 
  
int main() 
{ 
   char a[] = "String"; 
   reverse(a); 
   return 0; 
} 
