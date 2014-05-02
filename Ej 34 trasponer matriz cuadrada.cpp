/*

*/
#include <stdio.h>
#include <conio.h>
#define COL 4
void cargar(int [COL][COL]);
void mostrar(int [COL][COL]);
void traspuesta(int[COL][COL]);



void main(void)
{
   int mat[COL][COL];

   cargar(mat);
   mostrar(mat);
	traspuesta(mat);
   printf("\n Matriz Traspuesta \n");
   mostrar(mat);
   getch();
}

void cargar(int m[COL][COL])
{
	int i,j;
   for(i=0;i<COL;i++)
   	for(j=0;j<COL;j++)
      	{printf("Ingrese un numero entero: ");
         scanf("%d",& m[i][j]);
         }
}

void mostrar(int m[COL][COL])
{
  int i,j;
  for(i=0;i<COL;i++)
  	{printf("\n");
    for(j=0;j<COL;j++)
    	printf("\t %d", m[i][j]);
   }
}


void traspuesta(int m[COL][COL])
{
	int i,j,aux;
   for(i=0;i<COL;i++)
   	for(j=(i+1);j<COL;j++)
      	{
      	aux=m[i][j];
         m[i][j]=m[j][i];
         m[j][i]=aux;
         }
   printf("\n");
}








