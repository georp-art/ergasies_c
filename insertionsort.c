#include<stdio.h>

int main()
{

int i,j,key,a[8];

for (i=0; i<=7; i++)
{
 printf ("dose ari8mous:",i+1);
 scanf("%d",&a[i]);
}

for (j=0; j<=7; j++)
   {
	key = a[j];
 	i = j-1;
 	while ((i>-1) && (a[i]>key)) //prosoxh sto i
 	 {
 	 		a[i+1] = a[i];
 	 		i = i-1;
	  }
	 a[i+1] = key;
   }
   for (i=0; i<=7; i++)
   printf("\t %d",a[i]);

   printf("\n");
   system("pause");
 }
