#include "peo.c" 
//������� 
void map_put(char map[SIZEX][SIZEY],struct people peo[])//���ﶨ���mapΪ�β�
{
	int i,j,commandcolor=0;
	//people_put(map,peo);
	setcolor(11,0);
	printf("\t\t\t����: ");
	setcolor(7,0);
	printf("%s",peo[0].name);
	setcolor(10,0);printf("\tHP:  ");setcolor(10,0);printf("%d",peo[0].hp);
	setcolor(10,0);printf("\t\t������: ");setcolor(13,0);printf("%d\n",peo[0].gj);
	
	setcolor(9,0);		
	printf("\t\t\t��Tab���鿴������Ϣ����F1�鿴������F2����ģʽ\n"); 
	for(i=0;i<SIZEX;i++)//2ά�����ͼ����� 
		{	
			printf ("\t\t\t");
			for(j=0;j<SIZEY;j++,j++)
				{
			 		if( (map[i][j]==-88) && (map[i][j+1]==-128) )//ǽ	-88 -128
			 			{commandcolor=1;}
			 		if( (map[i][j]==-95) && (map[i][j+1]==-30) )//��	-95 -30
			 			{commandcolor=2;}
			 		if( (map[i][j]==-71) && (map[i][j+1]==-42) )//��	-71 -42 
			 			{commandcolor=3;}
			 		if( (map[i][j]==-95) && (map[i][j+1]==-12) )//Ѫ	-95 -12
			 			{commandcolor=4;}
			 		if( (map[i][j]==-95) && (map[i][j+1]==-8) )//��	-71 -91
			 			{commandcolor=5;}
			 		if( (map[i][j]==-95) && (map[i][j+1]==-14) )//��	-95 -14
			 			{commandcolor=6;}
			 		if( (map[i][j]==-87) && (map[i][j+1]==73) )//�� 	-51 -11 
			 			{commandcolor=7;}
			 		if( (map[i][j]==-69) && (map[i][j+1]==-94) )//�� 	-69 -94
			 			{commandcolor=8;}
			 		if( (map[i][j]==-49) && (map[i][j+1]==-13) )//�� 	-49 -13
			 			{commandcolor=9;}
					switch (commandcolor)
						{	
							case 1:setcolor(6,0);break;//ǽ 
							case 2:setcolor(7,0);break;//�� 
							case 3:setcolor(12,0);break;//�� 
							case 4:setcolor(10,0);break;//Ѫ 
							case 5:setcolor(13,0);break;//�� 
							case 6:setcolor(24,0);break;//�� 
							case 7:setcolor(9,0);break;//�� 
							case 8:setcolor(4,0);break;//�� 
							case 9:setcolor(11,0);break;//�� 
							default:setcolor(5,0);		//���� 
						}
					printf ("%c%c",map[i][j],map[i][j+1]);
				}
		 	printf ("\n");
		}	
}
//ǽ	-88 -128
//��	-71 -42 
//Ѫ	-95 -12
//��	-95 -8
//��	-56 -53 
//��	-95 -14 
//�� 	-87 73 
//�� 	-69 -94
//�� 	-49 -13
