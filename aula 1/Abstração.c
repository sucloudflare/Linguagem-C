#include <stdio.h>

int main(void)
{
     printf(“miau.\n”); 
     printf(“miau.\n”); 
     printf(“mmiau.\n”); 
}

#include <stdio.h>

int main(void)
{
     for(int i = 0; i < 3; i++)
     {
          printf(“miau.\n”); 
          printf(“miau.\n”); 
          printf(“miau.\n”); 
	 }
}

#include <stdio.h>

void miau(void)
{
    printf(“miau.\n”); 
}

int main(void)
{
     for(int i = 0; i < 3; i++)
     {
         miau();
	 }
}

#include <stdio.h>

void miau(void);

int main(void)
{
     for(int i = 0; i < 3; i++)
     {
          miau();
	 }
}

void miau(void)
{
      printf(“miau.\n”); 
}

include <stdio.h>

void miau(int n);

int main(void)
{
     miau(3);
}

void miau(int n)
{
     for(int i = 0; i < 3; i++)
     {
          printf(“miau.\n”); 
	 }
}

#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
     int i = get_positive_int();
     printf(“%i\n”);
}

// Solicita um número inteiro positivo ao usuário
int get_positive_int(void)
{
     int n;
     do
     {
          n = get_int(“Número positivo: \n”); 
	 }
     while(n < 1);
     return n;
}
