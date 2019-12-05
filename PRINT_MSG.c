
#include "stm32f4xx.h"
#include <string.h>
#include <stdio.h>

void printMsg(int a)
{
	 //float a1=* ((float * ) &a);
	 
	 char Msg1[100];
	 
	 char *ptr;
	sprintf(Msg1, "The Sigmoid Value is: %d, \n", a);
	 
	 ptr = Msg1 ;
   while(*ptr != '\0'){
      ITM_SendChar(*ptr);
      ++ptr;
   
	 }
	 ITM_SendChar('\t')	 ;
   }

	 
	 
	 
	 
void printMsg1(int a, int b, int c, int d)
{
	 //float a1=* ((float * ) &a);
	 //float b1=* ((float * ) &b);
	 //float c1=* ((float * ) &c);
	 //float d1=* ((float * ) &d);
	 
	char Msg[100];
	char Msg1[100];
	char Msg2[100];
	char Msg3[100];
	 
	 char *ptr;
	sprintf(Msg, "%d \t", a);

	 
	 ptr = Msg ;
   while(*ptr != '\0'){
      ITM_SendChar(*ptr);
      ++ptr;
	 }
	 
	sprintf(Msg1, "%d \t", b);

	 
	 ptr = Msg1 ;
   while(*ptr != '\0'){
      ITM_SendChar(*ptr);
      ++ptr;
	 }
	 
	sprintf(Msg2, "%d \t", c);

	 
	 ptr = Msg2 ;
   while(*ptr != '\0'){
      ITM_SendChar(*ptr);
      ++ptr;
	 }
	 
	sprintf(Msg3, "%d \t", d);

	 
	 ptr = Msg3 ;
   while(*ptr != '\0'){
      ITM_SendChar(*ptr);
      ++ptr;
	 
	 }
	 ITM_SendChar('\n')	 ;
   }

	 void printMsg2(a)
	 {		  
      ITM_SendChar('X');
		 ITM_SendChar('1');
		 ITM_SendChar('\t');
		 ITM_SendChar('X');
		 ITM_SendChar('2');
		 ITM_SendChar('\t');
		 ITM_SendChar('X');
		 ITM_SendChar('3');
		 ITM_SendChar('\t');
		 ITM_SendChar('Y');
		 ITM_SendChar('\n');
	 }
	 
	  void printLOGICFUNC(a)
	 {		  
      ITM_SendChar('L');
		 ITM_SendChar('O');
		 ITM_SendChar('G');
		 ITM_SendChar('I');
			ITM_SendChar('C');
		 ITM_SendChar(' ');
		 ITM_SendChar('F');
		 ITM_SendChar('U');
			ITM_SendChar('N');
		 ITM_SendChar('C');
		 ITM_SendChar('T');
		 ITM_SendChar('I');
		 ITM_SendChar('O');
		 ITM_SendChar('N');	
		 ITM_SendChar(':');
	 }
	 
	 	 void printAND(a)
	 {		  
      ITM_SendChar('A');
		 ITM_SendChar('N');
		 ITM_SendChar('D');
		 ITM_SendChar('\n');
	 }
	 
	 	 void printNAND(a)
	 {	
      ITM_SendChar('N');		 
      ITM_SendChar('A');
		 ITM_SendChar('N');
		 ITM_SendChar('D');
		 ITM_SendChar('\n');
	 }
	 
	 	 	 void printOR(a)
	 {		  
      ITM_SendChar('O');
		 ITM_SendChar('R');
		 ITM_SendChar('\n');
	 }
	 
	 	 	 	 void printNOR(a)
	 {	
      ITM_SendChar('N');		 
      ITM_SendChar('O');
		 ITM_SendChar('R');
		 ITM_SendChar('\n');
	 }
	 
		 	 void printNOT(a)
	 {		  
      ITM_SendChar('N');
		 ITM_SendChar('O');
		 ITM_SendChar('T');
		 ITM_SendChar('\n');
	 }
	 	 
		 	 void printXOR(a)
	 {		  
      ITM_SendChar('X');
		 ITM_SendChar('O');
		 ITM_SendChar('R');
		 ITM_SendChar('\n');
	 }
	 
		 	 void printXNOR(a)
	 {		  
      ITM_SendChar('X');
		 ITM_SendChar('N');
		 ITM_SendChar('O');
		 ITM_SendChar('R');		 
		 ITM_SendChar('\n');
	 }
