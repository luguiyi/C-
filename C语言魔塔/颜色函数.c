#include<windows.h> 
//颜色函数 ,用法：（字体颜色，背景颜色） 
void setcolor(unsigned short ForeColor,unsigned short BackGroundColor)
{	
	HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon,(ForeColor%16)|(BackGroundColor%16*16));
}
