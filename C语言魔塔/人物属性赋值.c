#include "peo.c" 
//���︳ֵ����
void people_assignin(char map[SIZEX][SIZEY],struct people peo[])	//���ﶨ���mapΪ�β� 		//ս����ֵ 
{	strcpy(peo[0].name,"��"); 										//�����︽��ֵ 
	peo[0].hp=20;
	peo[0].gj=2;
	peo[0].mark=1;
	strcpy(peo[1].name,"��"); 									//������1�Ĺ��︳��ֵ 
	peo[1].hp=5;
	peo[1].gj=2;
	peo[1].mark=1;
	strcpy(peo[2].name,"BOSS");
	peo[2].hp=50;
	peo[2].gj=7;
	peo[2].mark=1;
	strcpy(peo[3].name,"��");
	peo[3].hp=5;
	peo[3].gj=5;
	peo[3].mark=1;
	strcpy(peo[4].name,"��");
	peo[4].hp=20;
	peo[4].gj=1;
	peo[4].mark=1;
}
//�� -51 -11 
//�� -69 -94
//�� -49 -13
