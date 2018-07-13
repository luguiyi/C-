#include "peo.c" 
//输出函数 
void map_put(char map[SIZEX][SIZEY],struct people peo[])//这里定义的map为形参
{
	int i,j,commandcolor=0;
	//people_put(map,peo);
	setcolor(11,0);
	printf("\t\t\t名字: ");
	setcolor(7,0);
	printf("%s",peo[0].name);
	setcolor(10,0);printf("\tHP:  ");setcolor(10,0);printf("%d",peo[0].hp);
	setcolor(10,0);printf("\t\t攻击力: ");setcolor(13,0);printf("%d\n",peo[0].gj);
	
	setcolor(9,0);		
	printf("\t\t\t按Tab键查看怪物信息，按F1查看帮助，F2作弊模式\n"); 
	for(i=0;i<SIZEX;i++)//2维数组地图的输出 
		{	
			printf ("\t\t\t");
			for(j=0;j<SIZEY;j++,j++)
				{
			 		if( (map[i][j]==-88) && (map[i][j+1]==-128) )//墙	-88 -128
			 			{commandcolor=1;}
			 		if( (map[i][j]==-95) && (map[i][j+1]==-30) )//人	-95 -30
			 			{commandcolor=2;}
			 		if( (map[i][j]==-71) && (map[i][j+1]==-42) )//怪	-71 -42 
			 			{commandcolor=3;}
			 		if( (map[i][j]==-95) && (map[i][j+1]==-12) )//血	-95 -12
			 			{commandcolor=4;}
			 		if( (map[i][j]==-95) && (map[i][j+1]==-8) )//攻	-71 -91
			 			{commandcolor=5;}
			 		if( (map[i][j]==-95) && (map[i][j+1]==-14) )//门	-95 -14
			 			{commandcolor=6;}
			 		if( (map[i][j]==-87) && (map[i][j+1]==73) )//王 	-51 -11 
			 			{commandcolor=7;}
			 		if( (map[i][j]==-69) && (map[i][j+1]==-94) )//虎 	-69 -94
			 			{commandcolor=8;}
			 		if( (map[i][j]==-49) && (map[i][j+1]==-13) )//象 	-49 -13
			 			{commandcolor=9;}
					switch (commandcolor)
						{	
							case 1:setcolor(6,0);break;//墙 
							case 2:setcolor(7,0);break;//人 
							case 3:setcolor(12,0);break;//怪 
							case 4:setcolor(10,0);break;//血 
							case 5:setcolor(13,0);break;//攻 
							case 6:setcolor(24,0);break;//门 
							case 7:setcolor(9,0);break;//王 
							case 8:setcolor(4,0);break;//虎 
							case 9:setcolor(11,0);break;//象 
							default:setcolor(5,0);		//其他 
						}
					printf ("%c%c",map[i][j],map[i][j+1]);
				}
		 	printf ("\n");
		}	
}
//墙	-88 -128
//怪	-71 -42 
//血	-95 -12
//攻	-95 -8
//人	-56 -53 
//门	-95 -14 
//王 	-87 73 
//虎 	-69 -94
//象 	-49 -13
