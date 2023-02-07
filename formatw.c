#include<stdio.h>
int main()
{ 
    char ch='B';
    printf("%c\n",ch);
    
      int x=40, y=100;
      printf("%d\n",x);
      printf("%i",y);
      
      float f=12.22;
      printf("%f\n",f);
      printf("%e",f);
      
      int a=67;
      printf("%o \n", a);
      printf("%x \n",a);
      
      int z=64;
      printf("%c \n",z);
      
      char str[]="format specifiers";
      printf("%s \n",str);
      printf("%20s \n",str);
      printf("%-20s \n",str);
      printf("%21s \n",str);
      printf("%-21s\n",str);
      
      }
      
     
 /*
     output :
     ccf@ccf-Precision-Tower-3431:~$ gcc formatw.c
ccf@ccf-Precision-Tower-3431:~$ ./a.out
B
40
10012.220000
1.222000e+01103 
43 
@ 
format specifiers 
   format specifiers 
format specifiers    
    format specifiers 
format specifiers

*/
      
