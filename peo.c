#include<stdio.h>
#include<string.h>
#define SIZEX 10 	//边界的高 
#define SIZEY 40 	//边界的宽度 
struct people
{char name[10];//名字 
 int hp;//生命 
 int gj;//攻击力 
 int mark;//人物与怪物的标志 ,当标志为0时就输了 
}; 
int mapmark; //地图的标志 
