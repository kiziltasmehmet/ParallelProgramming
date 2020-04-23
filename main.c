//ceng project by MEHMET KIZILTAS

/*This program compares serial and parallel operation of algorithms.
  It gives information about the total realization times of serial and parallel algorithms.
  Program produces results about serial and parallel working speed of radix sort sorting algorithm.
  Program can be develop.*/
  
  /*
	Name: ceng
	Copyright: -
	Author: MEHMET KIZILTAS
	Date: 10.04.20 02:49
	Description: main file
*/

#include <stdio.h>
#include "usermessages.h"
#include "parametervariables.h"

void start();

int main(int argc, char *argv[]) 
{
	argcount = argc;
	birinciArguman = argv[1];
	ikinciArguman = argv[2];
	ucuncuArguman = argv[3];
	dorduncuArguman = argv[4];
	besinciArguman = argv[5];
	altinciArguman = argv[6];
	yedinciArguman = argv[7];
	sekizinciArguman = argv[8];
	dokuzuncuArguman = argv[9];
	onuncuArguman = argv[10];
	start();
	return 0;
}

void start() //Program baslangici
{
	if(argcount == 1) //Eger program parametresiz calistiridiysa.
	{ 
		mandatoryOptionsMissingMessage();
		system("pause");
	}
	else if(argcount == 2) //Eger program 1 parametre aldiysa
	{ 
		argumentCount1Status();
	}
	else if(argcount == 9)
	{
		argumentCount9Status();
	}
	else if(argcount == 11)
	{
		argumentCount11Status();
	}
	else
	{
		banner();
		UnkownCommandErrorMessage();
	}
	printf("\n");
}







