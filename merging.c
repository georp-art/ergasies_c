#include<stdio.h>

int main(void)
{
	int i,j,k,m=5,n=3;
	int x[m],y[n],z[m+n];
	
	for (i=0; i<m; i++)
	{
		printf("dose enan ari8mo x[%d]",i+1);
		scanf("%d",&x[i]);
	 } 
	 
	 printf("\n");
	 
	 for (i=0; i<n; i++)
	{
		printf("dose enan ari8mo y[%d]",i+1);
		scanf("%d",&y[i]);
	 } 
	 
	i=0;
	j=0;
	

for (k=0; k<m+n; k++)
{
	if(x[i]<y[j])
	 {
	 z[k]=x[i];
	 i++;
	 }
	 else 
	 {
	 	z[k]=y[j];
	 	j++;
     }	 
		
	 for (i=0; i<m+n; i++)
	  printf("\t %d",z[i]);
	
	printf("\n");
}	 
printf("\n");
return 0;	 
}
