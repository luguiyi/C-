#include "peo.c" 
void hpup(char map[SIZEX][SIZEY],struct people peo[])	//��Ѫ���������ƶ������б����� 
{
	map_put(map,peo);									//�����ͼ 
	setcolor(10,0);
	printf("����ֵ��%d��",peo[0].hp);
	peo[0].hp=peo[0].hp+5;								//����ֵ��5 
	printf("%d\n",peo[0].hp);
	system("pause");
	system("cls");
} 
