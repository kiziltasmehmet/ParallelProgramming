#include "usermessages.h"

void banner()
{
	setColor(6);
	printf("\n _____  _____  _____  _____\n");
	printf("|      |      |     ||     |\n");
	printf("|      |_____ |     ||_____|\n");
	printf("|_____ |_____ |     | _____|\tDEVELOPER: MEHMET KIZILTAS\n\n");
	setColor(15);
}

void help(){ // Help Function
	printf("usage: ceng [options]\n\nOptions:\n\n  -rF       Path to the file to be read.\n  -wF       Path to the file where the data will be written.\n");
	printf("  -A        Algorithm to be used.\n  -O        Data sorting method.\n  -S        Show the data to be used on the console screen.\n\n");
	printf("  More options:\n\n    all      Show all data.\n    raw      Show raw data\n    proc     Show processed data\n");
}


void showWarningMessage(){
	printf("error: no such option: %s",birinciArguman);
}

void mandatoryOptionsMissingMessage(){
	banner();
	printf("Usage: ceng [options]\n\n");
	printf("error: missing a mandatory option (-rF, -wF, -A, -O, -S (all,raw,proc)). Use -help for basic and -advhelp for advanced help\n\n");
}

void advancedHelp(){
	help();
	printf("\nexample: ceng -rF filePath -wF filePath -A algorithm -O options\n");
	printf("example: ceng -rF C://Users//root//file.txt -wF C://Users//file.txt -A radix -O parallel\n\n");
	printf("example: ceng -rF filePath -wF filePath -A algorithm -O options -S displayoptions\n");
	printf("example: ceng -rF C://Users//root//file.txt -wF C://Users//file.txt -A radix -O parallel -S all\n");
}

void UnkownCommandErrorMessage(){
	printf("\nerror: unkown command. use -help for basic and -advhelp for advanced help\n");
}



