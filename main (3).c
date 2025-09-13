/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n=4;
   int stars=1,spaces=n-1;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=spaces;j++){
           printf(" ");
   }
   for(int j=1;j<=stars;j++){
           printf("*");
   }
   stars=stars+2;
   spaces--;
   printf("\n");
   }
   stars=stars-4,spaces=1;
   for(int i=1;i<=n-1;i++){
       for(int j=1;j<=spaces;j++){
           printf(" ");
   }
   for(int j=1;j<=stars;j++){
           printf("*");
   }
   stars=stars-2;
   spaces++;
   printf("\n");
   }
    return 0;
}