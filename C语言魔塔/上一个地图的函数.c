#include "peo.c" 
void backroom(char map[SIZEX][SIZEY],struct people peo[])	//������һ������ĺ��������ƶ������б����� 
{
	mapmark--;
	switch(mapmark)
		{	
			case 1:
				map_assignin(map,peo);						
				map[1][2]=' ';
				map[1][3]=' ';
				map[7][SIZEY-4]=-95;
				map[7][SIZEY-3]=-30;break;
			case 2:
				map_assignin2(map,peo);
				map[7][2]=' ';
				map[7][3]=' ';
				map[3][SIZEY-4]=-95;
				map[3][SIZEY-3]=-30;break;
		}
} 
//ǽ	-57 -67
//��	-71 -42 
//Ѫ	-47 -86
//��	-71 -91
//��	-95 -30 
//��	-95 -15
