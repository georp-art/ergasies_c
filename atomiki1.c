#include<stdio.h>

int main(void)

{
	// eisodos tou programmatos//
	
int x,i,k,fores;          
char a,b;

 //o xrhsths A pliktrologei enan ari8mo apo to 1 ews to 1000//
 
 printf("paixti A dose enan ari8mo sth klimaka [1 ews 1000]:");
 scanf("%d",&x);
 
//elegxos tou ari8mou pou plhktologisame// 
 while (x<1 || x>1000)
  {
  	printf ("/n paixth A dose pali enan ari8mo sth klimaka [1 ews 1000]:");
  	scanf("%d",&x);
  }

for (i=1; i<150; i++)
  {
  	printf("\n");
   } 
  fores=1;
  
  //o B paixths prepei na mantepsei poios ari8mos eiani//
  
  printf(" paixti B hr8e h wra na mantepseis poios einai o ari8mos autos:");
  scanf("%d",&k);
  
  //elegxos tou ari8mou an einai megakyteros h mikroteros apo auton pou o A paixths dhkwse//
  
  while (k<x || k>x)
   {
    if (k<x)
     {
	 printf("o ari8mos pou 8elw na brw einai megalyteros");
	 printf("\n dose pali enan allo ari8mo:");
	 scanf("%d",&k);
	 }
	else if (k>x)
	 {
	 printf("o ari8mos pou 8elw na brw einai mikroteros");
	 printf("\n dose pali enan allo ari8mo:");
	 scanf("%d",&k);
	 }
	 fores++;
   }
   
   //emfanish tou ari8mou kai oi fores pou xreiasrthkan //
   
   printf("\n o ari8mos bre8hke kai einai o: %d" ,k);
   printf("\n o ari8mos bre8hke meta apo prospa8eies:%d " ,fores);
   
   printf("\n");
   
   system ("pause");
   return 0;
}
