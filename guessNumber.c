#include<stdio.h>

/* Dhmioyrgia enos paixnidiou me 2 paiktes. 
O prwtos paikths prepei na plhktrologhsei enan arithmo apo to 1 ews to 1000. 
O deyteros paikths prepei na mantepsei ayton ton aritmo.
Otan h mantepsia einai swsth to programma tha emfanizei kai tis prospathies pou ekane */

int main(void)

{
// eisodos tou programmatos//
	
int number,i,guess,count;          
char a,b;

 //o xrhsths A pliktrologei enan ari8mo apo to 1 ews to 1000//
 
 printf("paixti A dose enan ari8mo sth klimaka [1 ews 1000]:");
 scanf("%d",&number);
 
//elegxos tou ari8mou pou plhktologisame// 
 while (number<1 || number>1000)
  {
  	printf ("/n paixth A dose pali enan ari8mo sth klimaka [1 ews 1000]:");
  	scanf("%d",&number);
  }

for (i=1; i<150; i++)
  {
  	printf("\n");
   } 
  count=1;
  
  //o B paixths prepei na mantepsei poios ari8mos eiani//
  
  printf(" paixti B hr8e h wra na mantepseis poios einai o ari8mos autos:");
  scanf("%d",&guess);
  
  //elegxos tou ari8mou an einai megakyteros h mikroteros apo auton pou o A paixths dhkwse//
  
  while (guess !=number)
   {
    if (guess<number)
     {
	 printf("o ari8mos pou 8elw na brw einai megalyteros");
	 printf("\n dose pali enan allo ari8mo:");
	 scanf("%d",&guess);
	 }
	else if (guess>number)
	 {
	 printf("o ari8mos pou 8elw na brw einai mikroteros");
	 printf("\n dose pali enan allo ari8mo:");
	 scanf("%d",&guess);
	 }
	 count++;
   }
   
   //emfanish tou ari8mou kai oi fores pou xreiasrthkan //
   
   printf("\n o ari8mos bre8hke kai einai o: %d" ,guess);
   printf("\n o ari8mos bre8hke meta apo prospa8eies:%d " ,count);
   
   printf("\n");
   
   system ("pause");
   return 0;
}
