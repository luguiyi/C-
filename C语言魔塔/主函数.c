#include "peo.c" 
main()
{
	system("mode con cols=90 lines=25");
	char map[SIZEX][SIZEY];										//���ﶨ���mapΪʵ�� 
 	struct people peo[10];										//��ʼ�������ٴ���ռ� 	 	
	void assignin(char map[SIZEX][SIZEY],struct people peo[]);	//�Ը�ֵ������������
	void put(char map[SIZEX][SIZEY],struct people peo[]);		//������������������� 
	void move(char map[SIZEX][SIZEY],struct people peo[]);		//�����ƶ����� 
	
	map_assignin(map,peo);										//��ͼ 1 ��ֵ 
	people_assignin(map,peo); 									//���︳ֵ 
	map_put(map,peo); 											//��ͼ��� 
	move(map,peo);												//�ƶ�����
	
}
//�ܹ�1440�д��� 
//�����ˣ� ���15-3 ��    ½���� 
//����ʱ�䣺2016��6��1�� 
/*
ѧԺ�����������Ϣ����ѧԺ
רҵ���������
�༶�����15-3
������½����
ѧ�ţ�2015025795
*/
