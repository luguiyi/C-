#include "peo.c" 
void attackElephant(char map[SIZEX][SIZEY],struct people peo[])
{
	int panduan;
	for(panduan=0;peo[4].hp>0&&peo[0].mark!=0;panduan++)			//peo[0]Ϊ���� peo[4]Ϊ�� 
	 	{ 
	  		peo[4].hp=peo[4].hp-peo[0].gj;							//�˹����� 
	 		if(peo[4].hp<0)											//��������ֵС��0ʱ������Ϊ0 
	  			{peo[4].hp=0;}
			peo[0].hp=peo[0].hp-peo[4].gj;							//�󹥻���
	  		if(peo[0].hp<=0)										//����������С��0ʱ������ 
	  			{peo[0].mark=0;}
			map_put(map,peo);											//ս���������ÿ����һ�Σ������ͼһ�Σ�
						
			if(peo[4].hp!=0)										//ս�����̵���Ϣ��� 
				{
				setcolor(8,0);
				printf("\n���ܵ�");
				setcolor(9,0);
				printf(" %d ",peo[4].gj);
				setcolor(8,0);
				printf("���˺�\t\t");
				
			 	printf("��ʣ��");
			 	setcolor(9,0);
			 	printf(" %d ",peo[0].hp);
			 	setcolor(8,0);
			 	printf("������\n");
			 	
			 	printf("%s �ܵ�",peo[4].name);
			 	setcolor(9,0);
			 	printf(" %d ",peo[0].gj);
			 	setcolor(8,0);
			 	printf("���˺�\t",peo[4].name,peo[0].gj);
			 	
			 	printf("%s ʣ��",peo[4].name);
			 	setcolor(9,0);
			 	printf(" %d ",peo[4].hp);
			 	setcolor(8,0);
			 	printf("������\n");
				}
			else
				{
				setcolor(8,0);
				printf("\n���ܵ�");
				setcolor(9,0);
				printf(" %d ",peo[4].gj);
				setcolor(8,0);
				printf("���˺�\t\t");
				setcolor(7,0);printf("%s ����\n",peo[4].name);
				}

			system("pause");
			system("cls");
	 	}
	
	strcpy(peo[4].name,"��");
	peo[4].hp=20;
	peo[4].gj=1;
	peo[4].mark=1;
}
