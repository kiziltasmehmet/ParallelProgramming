#include "parametercheck.h"


void argumentCount1Status()
{
	banner();
	if(!strcmp(birinciArguman,"-help"))
	{
		help();
	}
	else if(!strcmp(birinciArguman,"-advhelp"))
	{
		advancedHelp();
	}
	else
	{
		showWarningMessage();	
	}
}

void argumentCount9Status()
{
	banner();
	if(!strcmp(birinciArguman,"-rF") && !strcmp(ucuncuArguman,"-wF") && !strcmp(besinciArguman,"-A") && !strcmp(yedinciArguman,"-O"))
	{
		if(!strcmp(altinciArguman,"radix") && !strcmp(sekizinciArguman,"serial")){
			readToFile();
			serialRadixSort();
			writeToFile();
		}
		else if(!strcmp(altinciArguman,"radix") && !strcmp(sekizinciArguman,"parallel"))
		{
			readToFile();
			parallelRadixSort();
			writeToFile();
		}
		else
		{
			UnkownCommandErrorMessage();
		}
	}
	else
	{
		UnkownCommandErrorMessage();
	}
} 

void argumentCount11Status()
{
	banner();
	if(!strcmp(birinciArguman,"-rF") && !strcmp(ucuncuArguman,"-wF") && !strcmp(besinciArguman,"-A") && !strcmp(yedinciArguman,"-O") && !strcmp(dokuzuncuArguman,"-S"))
	{
		if(!strcmp(altinciArguman,"radix") && !strcmp(sekizinciArguman,"serial") && !strcmp(onuncuArguman,"all"))
		{
			readToFile();
			printf("\n\t\t\t\t Raw Data\n\t\t\t\t --------\n");
			dataWriteConsole();
			serialRadixSort();
			writeToFile();
			printf("\n\t\t\t\tProcessed Data\n\t\t\t\t--------------\n");
			dataWriteConsole();
		}
		else if(!strcmp(altinciArguman,"radix") && !strcmp(sekizinciArguman,"parallel") && !strcmp(onuncuArguman,"all"))
		{
			readToFile();
			printf("\n\t\t\t\t Raw Data\n\t\t\t\t --------\n");
			dataWriteConsole();
			parallelRadixSort();
			writeToFile();
			printf("\n\t\t\t\tProcessed Data\n\t\t\t\t--------------\n");
			dataWriteConsole();
		}
		else if(!strcmp(altinciArguman,"radix") && !strcmp(sekizinciArguman,"serial") && !strcmp(onuncuArguman,"raw"))
		{
			readToFile(ikinciArguman);
			printf("\n\t\t\t\t Raw Data\n\t\t\t\t --------\n");
			dataWriteConsole();
			serialRadixSort();
			writeToFile();
		}
		else if(!strcmp(altinciArguman,"radix") && !strcmp(sekizinciArguman,"parallel") && !strcmp(onuncuArguman,"raw"))
		{
			readToFile();
			printf("\n\t\t\t\t Raw Data\n\t\t\t\t --------\n");
			dataWriteConsole();
			parallelRadixSort();
		}
		else if(!strcmp(altinciArguman,"radix") && !strcmp(sekizinciArguman,"serial") && !strcmp(onuncuArguman,"proc"))
		{
			readToFile();
			serialRadixSort();
			printf("\n\t\t\t\tProcessed Data\n\t\t\t\t--------------\n");
			dataWriteConsole();
		}
		else if(!strcmp(altinciArguman,"radix") && !strcmp(sekizinciArguman,"parallel") && !strcmp(onuncuArguman,"proc"))
		{
			readToFile();
			parallelRadixSort();
			printf("\n\t\t\t\tProcessed Data\n\t\t\t\t--------------\n");
			dataWriteConsole();
		}
		else
		{
			UnkownCommandErrorMessage();
		}
	}
	else
	{
		UnkownCommandErrorMessage();
	}
}

