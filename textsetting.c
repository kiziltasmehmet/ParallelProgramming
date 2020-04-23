#include "fontcolor.h"


void setColor(int colorValue){
	Console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(Console,colorValue);
}
