#include "peo.c" 
void nextroom(char map[SIZEX][SIZEY],struct people peo[])	//������һ������ĺ��� �����ƶ������ﱻ���� 
{	
	mapmark++;
	switch(mapmark)
		{
			case 2:map_assignin2(map,peo);break;
			case 3:map_assignin3(map,peo);break;
		}
} 
