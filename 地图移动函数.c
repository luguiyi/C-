#include "peo.c" 
//�ƶ�����
void move(char map[SIZEX][SIZEY],struct people peo[])//���ﶨ���mapΪ�β�
{  	
	void judgeup(char map[SIZEX][SIZEY],struct people peo[],int x,int y);//�����ƶ����жϺ������� 
	void judgedown(char map[SIZEX][SIZEY],struct people peo[],int x,int y);//�����ƶ����жϺ�������
	void judgeleft(char map[SIZEX][SIZEY],struct people peo[],int x,int y);//�����ƶ����жϺ�������
	void judgeright(char map[SIZEX][SIZEY],struct people peo[],int x,int y);//�����ƶ����жϺ�������
	int i,j,x,y;
	char command;
		while(peo[0].mark==1)
			{if(peo[2].hp==0)
				{goto win;}
				
			command=getch();							//�����ƶ�����
			 system("cls");								//�������� 
			 
			for(i=0;i<SIZEX;i++)						//��ѯ��������λ�ã�ÿ���ƶ�ǰ����Ҫ��ѯ��λ�� 
				{for(j=0;j<SIZEY;j++,j++)
					{
					 if((map[i][j]==-95)&&(map[i][j+1]==-30))
						{x=i;
						 y=j;
						}
					}
				}		
			//printf("%d  %d\n",x,y); 
			switch(command)
			 	{	
				 case  72:								//���ϵķ���� 
				 case 'W':
				 case 'w':judgeup(map,peo,x,y);break;
				 
				 case  80:								//���µķ���� 
				 case 'S':
				 case 's':judgedown(map,peo,x,y);break;
				 
				 case  75:								//����ķ���� 
				 case 'A':
				 case 'a':judgeleft(map,peo,x,y);break;
				 
				 case  77:								//���ҵķ���� 
				 case 'D':
				 case 'd':judgeright(map,peo,x,y);break;
				 
				 case 59:printf ("\t\t\tʤ�����������BOSS��\n\t\t\tʧ���������˵�����ֵΪ0\n");
						 printf ("\t\t\t�÷������WASD�ƶ�����\n");break;
				  
				 case 60:greed(map,peo,x,y);break;
				 
				 case 9:people_put(map,peo);break; 
			 	}
			map_put (map,peo);								//�����������
			}
	if(peo[2].hp==0)
		{
			win : system("cls"); 
			setcolor(7,0);
			printf("��Ӯ��!\n");
			system("pause");
		}
	if(peo[0].mark==0)
		{
			system("cls"); 
			setcolor(7,0);
			printf ("�����ˣ�\n");
			system("pause");
		} 
	
}

//�����ƶ����жϺ���
void judgeup(char map[SIZEX][SIZEY],struct people peo[],int x,int y)
{	
	int command;										//�����ַ�����switch�ж� 
	
	if((map[x-1][y]==-88)&&(map[x-1][y+1]==-128))		//ǽ	-88 -128
		{command=1;} 
	else if((map[x-1][y]==-95)&&(map[x-1][y+1]==-14))	//��	-95 -14 
		{command=2;} 
	else if((map[x-1][y]==-71)&&(map[x-1][y+1]==-42))	//�� 
		{command=3;} 
	else if((map[x-1][y]==-95)&&(map[x-1][y+1]==-12))	//Ѫ 
		{command=4;}
	else if((map[x-1][y]==-95)&&(map[x-1][y+1]==-8))	//��  
		{command=5;} 
	else if((map[x-1][y]==-87)&&(map[x-1][y+1]==73))	//�� 	-51 -11 
		{command=6;} 
	else if((map[x-1][y]==-69)&&(map[x-1][y+1]==-94))	//�� 	-69 -94
		{command=7;} 
	else if((map[x-1][y]==-49)&&(map[x-1][y+1]==-13))	//�� 	-49 -13
		{command=8;} 		 
	switch(command)
		{
			case 1:	 
				map[x-1][y]=-88;						//ǽ��ԭ����λ�ò���
				map[x-1][y+1]=-128;
				map[x][y]=-95;							//��Ҳ��ԭ����λ�ã����ı�
				map[x][y+1]=-30;break;
		
			case 2:	 
			 	map[x-1][y]=-95;						//����ԭ����λ�ò���
			 	map[x-1][y+1]=-14;	
			 	map[x][y]=-95;							//��Ҳ��ԭ����λ�ã����ı�
			 	map[x][y+1]=-30;break;
			 
			case 3:
				attackmonster(map,peo);					//��������� 1 ��ս������ 
			 	map[x-1][y]=' ';						//����λ����0
				map[x-1][y+1]=' ';									
			 	map[x][y]=-95;							//���������ƶ�
				map[x][y+1]=-30; break;
			 
			case 4:
				hpup(map,peo);
			 	map[x-1][y]=-95;						//����ԭ����λ�ò���
			 	map[x-1][y+1]=-30;							
				map[x][y]=' ';							//��Ҳ��ԭ����λ�ã����ı� 
				map[x][y+1]=' ';break;
			 
			case 5:
				ATKup(map,peo);
			 	map[x-1][y]=-95;						//�������� 
			 	map[x-1][y+1]=-30;
				map[x][y]=' ';							//Ѫ��λ����0
				map[x][y+1]=' ';break;
			 
			case 6:
				attackboss(map,peo); 					/*������ս������*/ 
			 	map[x-1][y]=' ';						//����λ����0
				map[x-1][y+1]=' ';									
			 	map[x][y]=-95;							//���������ƶ�
				map[x][y+1]=-30; break;
				
			case 7:
				attacktiger(map,peo);					/*�뻢��ս������*/
			 	map[x-1][y]=' ';						//����λ����0
				map[x-1][y+1]=' ';									
			 	map[x][y]=-95;							//���������ƶ�
				map[x][y+1]=-30; break;
				
			case 8:
				attackElephant(map,peo);				/*�����ս������*/
			 	map[x-1][y]=' ';						//����λ����0
				map[x-1][y+1]=' ';									
			 	map[x][y]=-95;							//���������ƶ�
				map[x][y+1]=-30; break;
			
			default:	 
				map[x-1][y]=-95;						//�˵�λ�������ƶ�
				map[x-1][y+1]=-30; 
				map[x][y]=' ';							//��λ����Ϊ0 
				map[x][y+1]=' ';
			}
} 

//�����ƶ����� 
void judgedown(char map[SIZEX][SIZEY],struct people peo[],int x,int y)
{	
	
	int command;

	if((map[x+1][y]==-88)&&(map[x+1][y+1]==-128))	//ǽ	-88 -128
		{command=1;}
	if((map[x+1][y]==-95)&&(map[x+1][y+1]==-14))	//��	-95 -14 
		{command=2;}
	if((map[x+1][y]==-71)&&(map[x+1][y+1]==-42))	//��	-71 -42 
		{command=3;}
	if((map[x+1][y]==-95)&&(map[x+1][y+1]==-12))	//Ѫ	-47 -86
		{command=4;}
	if((map[x+1][y]==-95)&&(map[x+1][y+1]==-8))	//��	-71 -91
		{command=5;}
	if((map[x+1][y]==-87)&&(map[x+1][y+1]==73))	//�� 	-51 -11 
		{command=6;}
	if((map[x+1][y]==-69)&&(map[x+1][y+1]==-94))	//�� 	-69 -94
		{command=7;}
	if((map[x+1][y]==-49)&&(map[x+1][y+1]==-13))	//�� 	-49 -13
		{command=8;}
		
	switch(command)
		{	
			case 1:	 
		 		map[x+1][y]=-88;						//ǽ��ԭ����λ�ò���
		 		map[x+1][y+1]=-128;
		 		map[x][y]=-95;							//��Ҳ��ԭ����λ�ã����ı�
	 	 		map[x][y+1]=-30;break;
	 	 		
		 	case 2:	 
			 	map[x+1][y]=-95;						//����ԭ����λ�ò���
			 	map[x+1][y+1]=-14;
			 	map[x][y]=-95;							//��Ҳ��ԭ����λ�ã����ı�
			 	map[x][y+1]=-30;break;
		 
		 	case 3:
			 	attackmonster(map,peo);					//��������� 1 ս������
				map[x+1][y]=' ';						//����λ����0 
				map[x+1][y+1]=' ';
				map[x][y]=-95;							//����Ҳ��ԭ����λ�ã����ı� 
				map[x][y+1]=-30;break;
		 
		 	case 4:
			 	hpup(map,peo);
			 	map[x+1][y]=-95;						//�������� 
			 	map[x+1][y+1]=-30;
			 	map[x][y]=' ';							//Ѫ��λ����0 
			 	map[x][y+1]=' ';break;
			 	
			case 5:
				ATKup(map,peo);
			 	map[x+1][y]=-95;						//�������� 
			 	map[x+1][y+1]=-30;
			 	map[x][y]=' ';							//λ����0 
			 	map[x][y+1]=' ';break;
		 	
		 	case 6:
		 		attackboss(map,peo); 					/*������ս������*/
				map[x+1][y]=' ';						//����λ����0 
				map[x+1][y+1]=' ';
				map[x][y]=-95;							//����Ҳ��ԭ����λ�ã����ı� 
				map[x][y+1]=-30;break;
			
			case 7:
		 		attacktiger(map,peo);					/*�뻢��ս������*/
				map[x+1][y]=' ';						//����λ����0 
				map[x+1][y+1]=' ';
				map[x][y]=-95;							//����Ҳ��ԭ����λ�ã����ı� 
				map[x][y+1]=-30;break;
			
			case 8:
		 		attackElephant(map,peo);				/*�����ս������*/
				map[x+1][y]=' ';						//����λ����0 
				map[x+1][y+1]=' ';
				map[x][y]=-95;							//����Ҳ��ԭ����λ�ã����ı� 
				map[x][y+1]=-30;break;
		
		 	default:	
				map[x+1][y]=-95;						//�˵�λ�������ƶ� 
				map[x+1][y+1]=-30;
				map[x][y]=' ';							//��λ����Ϊ0 
				map[x][y+1]=' ';
		}
} 

//�����ƶ����� 
void judgeleft(char map[SIZEX][SIZEY],struct people peo[],int x,int y)
{
	
	int command;
	
	if((map[x][y-2]==-88)&&(map[x][y-1]==-128))			//ǽ	-88 -128
		{command=1;} 
	else if((map[x][y-2]==-95)&&(map[x][y-1]==-14))		//�� 
		{command=2;} 
	else if((map[x][y-2]==-71)&&(map[x][y-1]==-42))		//�� 
		{command=3;} 
	else if((map[x][y-2]==-95)&&(map[x][y-1]==-12))		//Ѫ 
		{command=4;} 
	else if((map[x][y-2]==-95)&&(map[x][y-1]==-8))		//�� 
		{command=5;}
	else if((map[x][y-2]==-87)&&(map[x][y-1]==73))		//�� 	-51 -11 
		{command=6;} 
	else if((map[x][y-2]==-69)&&(map[x][y-1]==-94))		//�� 	-69 -94
		{command=7;} 
	else if((map[x][y-2]==-49)&&(map[x][y-1]==-13))		//�� 	-49 -13
		{command=8;}  
		
	switch(command)
		{	
			case 1:	
		 		map[x][y-2]=-88;						//ǽ��ԭ����λ�ò��� 
	 	 		map[x][y-1]=-128;
		 		map[x][y]=-95;							//��Ҳ��ԭ����λ�ã����ı�
		 		map[x][y+1]=-30;break;
		
		 	case 2:
			 	backroom(map,peo);break;				//������һ����ͼ 
		 
		 	case 3:
			 	attackmonster(map,peo);					//��������� 1 ս������
				map[x][y-2]=' ';						//����λ����0 
				map[x][y-1]=' ';
				map[x][y]=-95;							//����Ҳ��ԭ����λ�ã����ı� 
				map[x][y+1]=-30;break;
		 
		 	case 4:
			 	hpup(map,peo);							//���ü�Ѫ����  
			 	map[x][y-2]=-95;						//�������� 
			 	map[x][y-1]=-30; 
			 	map[x][y]=' ';							//Ѫ��λ����0 
			 	map[x][y+1]=' ';break;
			 	
			case 5:
				ATKup(map,peo);							//���üӹ����� 
			 	map[x][y-2]=-95;						//�������� 
			 	map[x][y-1]=-30;
			 	map[x][y]=' ';							//����λ����0 
			 	map[x][y+1]=' ';break;
		 	
		 	case 6:
			 	attackboss(map,peo); 					/*������ս������*/
				map[x][y-2]=' ';						//����λ����0 
				map[x][y-1]=' ';
				map[x][y]=-95;							//����Ҳ��ԭ����λ�ã����ı� 
				map[x][y+1]=-30;break;
			
			case 7:
			 	attacktiger(map,peo);					/*�뻢��ս������*/
				map[x][y-2]=' ';						//����λ����0 
				map[x][y-1]=' ';
				map[x][y]=-95;							//����Ҳ��ԭ����λ�ã����ı� 
				map[x][y+1]=-30;break;
			
			case 8:
			 	attackElephant(map,peo);				/*�����ս������*/
				map[x][y-2]=' ';						//����λ����0 
				map[x][y-1]=' ';
				map[x][y]=-95;							//����Ҳ��ԭ����λ�ã����ı� 
				map[x][y+1]=-30;break;
			
		 	default:	
				map[x][y-2]=-95;						//�������� 
				map[x][y-1]=-30;
				map[x][y]=' ';							//ԭ����λ����Ϊ0 
				map[x][y+1]=' ';
		}
} 

//�����ƶ����� 
void judgeright(char map[SIZEX][SIZEY],struct people peo[],int x,int y)
{

	int command;

	if((map[x][y+2]==-88)&&(map[x][y+3]==-128))			//ǽ	-88 -128
		{command=1;} 
	else if((map[x][y+2]==-95)&&(map[x][y+3]==-14))		//��	-95 -14 
		{command=2;} 
	else if((map[x][y+2]==-71)&&(map[x][y+3]==-42))		//�� 
		{command=3;} 
	else if((map[x][y+2]==-95)&&(map[x][y+3]==-12))		//Ѫ 
		{command=4;}
	else if((map[x][y+2]==-95)&&(map[x][y+3]==-8))		//�� 
		{command=5;} 
	else if((map[x][y+2]==-87)&&(map[x][y+3]==73))		//�� 	-51 -11  
		{command=6;} 
	else if((map[x][y+2]==-69)&&(map[x][y+3]==-94))		//�� 	-69 -94
		{command=7;} 
	else if((map[x][y+2]==-49)&&(map[x][y+3]==-13))		//�� 	-49 -13
		{command=8;} 
	
	switch(command)
		{	case 1:							
		 		map[x][y+2]=-88;						//ǽ��ԭ����λ�ò��� 
		 		map[x][y+3]=-128;
		 		map[x][y]=-95;							//��Ҳ��ԭ����λ�ã����ı�
	 	 		map[x][y+1]=-30;break;
		
		 	case 2:nextroom(map,peo);break;				//������һ����ͼ�ĺ��� 
		 
		 	case 3:
			 	attackmonster(map,peo);					//��������� 1 ս������
				map[x][y+2]=' ';						//��������0 
				map[x][y+3]=' ';
				map[x][y]=-95;							//������ԭ����λ�ã����ı� 
				map[x][y+1]=-30;break;
		 
		 	case 4:
			 	hpup(map,peo);							//���ü�Ѫ���� 
				map[x][y+2]=-95;						//�������� 
				map[x][y+3]=-30; 
			 	map[x][y]=' ';							//λ����0 
			 	map[x][y+1]=' ';break;
			 	
			case 5:
				ATKup(map,peo); 						//���üӹ����ĺ��� 
				map[x][y+2]=-95;						//�������� 
				map[x][y+3]=-30;
			 	map[x][y]=' ';							//λ����0 
			 	map[x][y+1]=' ';break;
			
			case 6:
			 	attackboss(map,peo); 					/*������ս������*/
				map[x][y+2]=' ';						//��������0 
				map[x][y+3]=' ';
				map[x][y]=-95;							//������ԭ����λ�ã����ı� 
				map[x][y+1]=-30;break;
			
			case 7:
			 	attacktiger(map,peo);					/*�뻢��ս������*/
				map[x][y+2]=' ';						//��������0 
				map[x][y+3]=' ';
				map[x][y]=-95;							//������ԭ����λ�ã����ı� 
				map[x][y+1]=-30;break;
			
			case 8:
			 	attackElephant(map,peo);				/*�����ս������*/
				map[x][y+2]=' ';						//��������0 
				map[x][y+3]=' ';
				map[x][y]=-95;							//������ԭ����λ�ã����ı� 
				map[x][y+1]=-30;break;
		 
		 	default:	
				map[x][y+2]=-95;						//�˵�λ�������ƶ� 
				map[x][y+3]=-30;
				map[x][y]=' ';							//��λ����Ϊ0 
				map[x][y+1]=' ';
		}
} 
//ǽ	-88 -128
//��	-71 -42 
//Ѫ	-95 -12
//��	-95 -8
//��	-95 -30
//��	-95 -14 
//�� 	-51 -11 
//�� 	-69 -94
//�� 	-49 -13
//F1��ASCII�� 59 
//Tab   9 
