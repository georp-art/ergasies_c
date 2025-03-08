#include<stdio.h>

int main(void)
{
	int n=8,a[8],i,k,incr,j,temp;
	
 for(i=0; i<8; i++)
 {
  printf("dose enan ari8mo a[%d]=",i+1);
  scanf("%d",&a[i]);
  }
  
  incr= (n / 2);
  
  while (incr>0)
   {
   	for (i=incr; i<=n-1; i++)
   	 {
   	 j=i-incr;
		while(j>=0)
			if(a[j]>a[j+incr])
			{
				temp=a[j];
				a[j]=a[j+incr];
				a[j+incr]=temp;
				j=j-incr;
			}
			else
			 j=-1;
			
	 }
	 
	printf("gia bhma  =%d--> ",incr);
	for(k=0; k<n; k++)
	  printf(" %d ",a[k]);
	  
	printf("\n");
	
	incr=incr / 2;
   }
   
  printf("\n");
  return 0;
}
