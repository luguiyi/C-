#include "peo.c" 
void attackboss(char map[SIZEX][SIZEY],struct people peo[])
{
	int panduan;
	for(panduan=0;peo[2].hp>0&&peo[0].mark!=0;panduan++)			//peo[0]Ϊ���� peo[2]Ϊboss
	 	{ 
	  		peo[2].hp=peo[2].hp-peo[0].gj;							//�˹���boss 
	 		if(peo[2].hp<0)											//��boss����ֵС��0ʱ������Ϊ0 
	  			{peo[2].hp=0;peo[2].mark=0;}
			peo[0].hp=peo[0].hp-peo[2].gj;							//boss������
	  		if(peo[0].hp<=0)										//����������С��0ʱ������ 
	  			{peo[0].mark=0;}
			map_put(map,peo);											//ս���������ÿ����һ�Σ������ͼһ�Σ�
						
			if(peo[2].hp!=0)										//ս�����̵���Ϣ��� 
				{
				setcolor(8,0);
				printf("\n���ܵ�");
				setcolor(9,0);
				printf(" %d ",peo[2].gj);
				setcolor(8,0);
				printf("���˺�\t\t");
				
			 	printf("��ʣ��");
			 	setcolor(9,0);
			 	printf(" %d ",peo[0].hp);
			 	setcolor(8,0);
			 	printf("������\n");
			 	
			 	printf("%s �ܵ�",peo[2].name);
			 	setcolor(9,0);
			 	printf(" %d ",peo[0].gj);
			 	setcolor(8,0);
			 	printf("���˺�\t",peo[2].name,peo[0].gj);
			 	
			 	printf("%s ʣ��",peo[2].name);
			 	setcolor(9,0);
			 	printf(" %d ",peo[2].hp);
			 	setcolor(8,0);
			 	printf("������\n");
				}
			else
				{
				setcolor(8,0);
				printf("\n���ܵ�");
				setcolor(9,0);
				printf(" %d ",peo[2].gj);
				setcolor(8,0);
				printf("���˺�\t\t");
				setcolor(7,0);printf("%s ����\n",peo[2].name);
				}

			system("pause");
			system("cls");
	 	}
}
