#include "peo.c" 
//����������� 
void people_put(char map[SIZEX][SIZEY],struct people peo[])	//���ﶨ���mapΪ�β�
{
	int number;
	int color;
		for(number=1;number<5;number++)							//�ṹ���������� 
			{
				setcolor(11,0);printf("\t\t\t����: ");
				if(number==1)
				{color=1;}
				if(number==2)
				{color=2;}
				if(number==3)
				{color=3;}
				if(number==4)
				{color=4;}
				 
				switch(color)
				{
					case 1:setcolor(12,0);break;
				 	case 2:setcolor(9,0);break;//�� 
					case 3:setcolor(4,0);break;//�� 
					case 4:setcolor(11,0);break;//�� 
					default:setcolor(10,0);		//����
				}
				
				printf("%s",peo[number].name);
		 		setcolor(10,0);printf("\tHP:  ");setcolor(11,0);printf("%d",peo[number].hp);
		 		setcolor(10,0);printf("\t\t������: ");setcolor(11,0);printf("%d\n",peo[number].gj);

			}
		setcolor(13,0);
		printf("\t\t\t�ӹ�������");
		setcolor(10,0);
		printf("\t������ֵ����\n");		
}

