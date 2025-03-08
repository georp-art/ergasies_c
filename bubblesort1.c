#include <stdio.h>

int main(void)
{

int i,j,k,a[8],temp;


for (i=0; i<8; i++)
{
	printf("dose enan ari8mo a[%d]= ",i+1);
	scanf("%d",&a[i]);
}

for(i=2; i<=8; i++)
 {
 	for(j=8; j>=i; j--)
 	 {
 	 	if(a[j-1]>a[j])
 	 	{
 	 		temp=a[j];
 	 		a[j]=a[j-1];
 	 		a[j-1]=temp;
		  }
		  printf("gia i=%d--> ",i);
		  for (k=0; k<8; k++)
		    printf("\t %d",a[k]);
		printf("\n");
	  }
	  
 }
 printf("\n");
 return 0; 
 
 } 
