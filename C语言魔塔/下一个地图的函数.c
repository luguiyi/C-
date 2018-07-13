#include "peo.c" 
void nextroom(char map[SIZEX][SIZEY],struct people peo[])	//进入下一个房间的函数 ，在移动函数里被调用 
{	
	mapmark++;
	switch(mapmark)
		{
			case 2:map_assignin2(map,peo);break;
			case 3:map_assignin3(map,peo);break;
		}
} 
