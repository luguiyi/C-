#include<windows.h> 
//��ɫ���� ,�÷�����������ɫ��������ɫ�� 
void setcolor(unsigned short ForeColor,unsigned short BackGroundColor)
{	
	HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon,(ForeColor%16)|(BackGroundColor%16*16));
}
