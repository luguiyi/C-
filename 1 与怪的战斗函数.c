#include "peo.c" 
void attackmonster(char map[SIZEX][SIZEY],struct people peo[])
{
	int panduan;
	for(panduan=0;peo[1].hp>0&&peo[0].mark!=0;panduan++)			//peo[0]Ϊ���� peo[1]Ϊ���� 
	 	{ 
	  		peo[1].hp=peo[1].hp-peo[0].gj;							//�˹������� 
	 		if(peo[1].hp<0)											//����������ֵС��0ʱ������Ϊ0 
	  			{peo[1].hp=0;}
			peo[0].hp=peo[0].hp-peo[1].gj;							//���﹥����
	  		if(peo[0].hp<=0)										//����������С��0ʱ������ 
	  			{peo[0].mark=0;}
			map_put(map,peo);											//ս���������ÿ����һ�Σ������ͼһ�Σ�
						
			if(peo[1].hp!=0)										//ս�����̵���Ϣ��� 
				{
				setcolor(8,0);
				printf("\n���ܵ�");
				setcolor(9,0);
				printf(" %d ",peo[1].gj);
				setcolor(8,0);
				printf("���˺�\t\t");
				
			 	printf("��ʣ��");
			 	setcolor(9,0);
			 	printf(" %d ",peo[0].hp);
			 	setcolor(8,0);
			 	printf("������\n");
			 	
			 	printf("%s �ܵ�",peo[1].name);
			 	setcolor(9,0);
			 	printf(" %d ",peo[0].gj);
			 	setcolor(8,0);
			 	printf("���˺�\t",peo[1].name,peo[0].gj);
			 	
			 	printf("%s ʣ��",peo[1].name);
			 	setcolor(9,0);
			 	printf(" %d ",peo[1].hp);
			 	setcolor(8,0);
			 	printf("������\n");
				}
			else
				{
				setcolor(8,0);
				printf("\n���ܵ�");
				setcolor(9,0);
				printf(" %d ",peo[1].gj);
				setcolor(8,0);
				printf("���˺�\t\t");
				setcolor(7,0);printf("%s ����\n",peo[1].name);
				}

			system("pause");
			system("cls");
	 	}
	
	strcpy(peo[1].name,"��"); 									//������1�Ĺ��︳��ֵ 
	peo[1].hp=5;
	peo[1].gj=2;
	peo[1].mark=1;
}
