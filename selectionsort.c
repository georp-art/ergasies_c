#include<stdio.h>

int main ()

{

	int i,j,x,k,a[8];
	for (i=0; i<=7; i++)
	{
	
	 printf("dose ari8mous:",i+1);
	 scanf("%d",&a[i]);
    }  
	
	for (i=0; i<=7; i++)
	 {       //prosoxh sto pos bazoyme to x kai to k
	 	x=a[i];
	 	k=i;
	 	for (j=i+1; j<=7; j++) //prosoxh sto j
	 	{
	 	 if (x>a[j])
	 	  {
	 	  	k=j;
	 	  	x=a[j];
		   }
		 }
		 a[k]=a[i];
		 a[i]=x;
	 }
	 for (i=0; i<=7; i++)
	 printf("\t %d",a[i]);
	 
	 printf("\n");
	 system("pause");
}
