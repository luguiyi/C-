#include "peo.c" 
void hpup(char map[SIZEX][SIZEY],struct people peo[])	//加血函数，在移动函数中被调用 
{
	map_put(map,peo);									//输出地图 
	setcolor(10,0);
	printf("生命值：%d＞",peo[0].hp);
	peo[0].hp=peo[0].hp+5;								//生命值加5 
	printf("%d\n",peo[0].hp);
	system("pause");
	system("cls");
} 
