#include "peo.c" 
void ATKup(char map[SIZEX][SIZEY],struct people peo[])	//攻击力的函数，在移动函数中被调用 
{
	map_put(map,peo);									//输出地图 
	setcolor(13,0);
	printf("攻击力：%d＞",peo[0].gj);
	peo[0].gj++;										//生命值加5 
	printf("%d\n",peo[0].gj);
	system("pause");
	system("cls");
} 
//攻击力  -95 -8
