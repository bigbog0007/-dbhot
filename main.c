/*#include "acllib.h"
#include <stdio.h>

int Setup()
{
	initConsole();
	printf("Please enter a width: ");
	int width;
	scanf("%d",&width);
	initWindow("mywindows app",0,0,width,width);
	beginPaint();
	line(0,0,width,width);
	endPaint();
	return 0;
}*/

#include <stdio.h>

int main()
{
	printf("%s:%d\n",_FILE_,_LINE);
	printf("%s,%s\n",_DATE_,_TIME);
	return 0;
}
