#include "peo.c" 
void ATKup(char map[SIZEX][SIZEY],struct people peo[])	//�������ĺ��������ƶ������б����� 
{
	map_put(map,peo);									//�����ͼ 
	setcolor(13,0);
	printf("��������%d��",peo[0].gj);
	peo[0].gj++;										//����ֵ��5 
	printf("%d\n",peo[0].gj);
	system("pause");
	system("cls");
} 
//������  -95 -8
