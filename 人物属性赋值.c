#include "peo.c" 
//人物赋值函数
void people_assignin(char map[SIZEX][SIZEY],struct people peo[])	//这里定义的map为形参 		//战斗赋值 
{	strcpy(peo[0].name,"人"); 										//给人物附初值 
	peo[0].hp=20;
	peo[0].gj=2;
	peo[0].mark=1;
	strcpy(peo[1].name,"怪"); 									//给类型1的怪物赋初值 
	peo[1].hp=5;
	peo[1].gj=2;
	peo[1].mark=1;
	strcpy(peo[2].name,"BOSS");
	peo[2].hp=50;
	peo[2].gj=7;
	peo[2].mark=1;
	strcpy(peo[3].name,"虎");
	peo[3].hp=5;
	peo[3].gj=5;
	peo[3].mark=1;
	strcpy(peo[4].name,"象");
	peo[4].hp=20;
	peo[4].gj=1;
	peo[4].mark=1;
}
//王 -51 -11 
//虎 -69 -94
//象 -49 -13
