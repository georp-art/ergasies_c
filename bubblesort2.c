#include<stdio.h>

int main(void)
{
	int i,j,t,temp,k,t1,a[8];

for (i=0; i<8; i++)
 	{
 		printf("dose enan ari8mo a[%d]=",i+1);
 		scanf("%d",&a[i]);
	 }
  t1=1;
  
  do
  {
  	t=0;
  	for(j=7; j>=t1; j--)
  	 {
  	 	if (a[j-1]>a[j])
  	 	{
		  
  	 	 temp=a[j-1];
  	 	 a[j-1]=a[j];
  	 	 a[j]=temp;
  	 	 t=j;
  	 	 } 
	}
	
	printf("gia i =%d-->",t1);
	for (k=0; k<8; k++)
	 printf("\t %d",a[k]);
	printf("\n");
	
	t1=t;
  }
  while (t!=0);
   
  printf("\n");
  return 0;
  
}
