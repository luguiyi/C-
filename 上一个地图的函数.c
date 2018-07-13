#include "peo.c" 
void backroom(char map[SIZEX][SIZEY],struct people peo[])	//进入上一个房间的函数，在移动函数中被调用 
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
//墙	-57 -67
//怪	-71 -42 
//血	-47 -86
//攻	-71 -91
//人	-95 -30 
//门	-95 -15
