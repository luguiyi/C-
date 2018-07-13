#include "peo.c" 
//移动函数
void move(char map[SIZEX][SIZEY],struct people peo[])//这里定义的map为形参
{  	
	void judgeup(char map[SIZEX][SIZEY],struct people peo[],int x,int y);//向上移动的判断函数声明 
	void judgedown(char map[SIZEX][SIZEY],struct people peo[],int x,int y);//向下移动的判断函数声明
	void judgeleft(char map[SIZEX][SIZEY],struct people peo[],int x,int y);//向左移动的判断函数声明
	void judgeright(char map[SIZEX][SIZEY],struct people peo[],int x,int y);//向右移动的判断函数声明
	int i,j,x,y;
	char command;
		while(peo[0].mark==1)
			{if(peo[2].hp==0)
				{goto win;}
				
			command=getch();							//输入移动命令
			 system("cls");								//清屏函数 
			 
			for(i=0;i<SIZEX;i++)						//查询人物坐标位置，每次移动前都需要查询到位置 
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
				 case  72:								//向上的方向键 
				 case 'W':
				 case 'w':judgeup(map,peo,x,y);break;
				 
				 case  80:								//向下的方向键 
				 case 'S':
				 case 's':judgedown(map,peo,x,y);break;
				 
				 case  75:								//向左的方向键 
				 case 'A':
				 case 'a':judgeleft(map,peo,x,y);break;
				 
				 case  77:								//向右的方向键 
				 case 'D':
				 case 'd':judgeright(map,peo,x,y);break;
				 
				 case 59:printf ("\t\t\t胜利条件：打败BOSS。\n\t\t\t失败条件：人的生命值为0\n");
						 printf ("\t\t\t用方向键或WASD移动人物\n");break;
				  
				 case 60:greed(map,peo,x,y);break;
				 
				 case 9:people_put(map,peo);break; 
			 	}
			map_put (map,peo);								//调用输出函数
			}
	if(peo[2].hp==0)
		{
			win : system("cls"); 
			setcolor(7,0);
			printf("你赢了!\n");
			system("pause");
		}
	if(peo[0].mark==0)
		{
			system("cls"); 
			setcolor(7,0);
			printf ("你输了！\n");
			system("pause");
		} 
	
}

//向上移动的判断函数
void judgeup(char map[SIZEX][SIZEY],struct people peo[],int x,int y)
{	
	int command;										//用于字符串的switch判断 
	
	if((map[x-1][y]==-88)&&(map[x-1][y+1]==-128))		//墙	-88 -128
		{command=1;} 
	else if((map[x-1][y]==-95)&&(map[x-1][y+1]==-14))	//门	-95 -14 
		{command=2;} 
	else if((map[x-1][y]==-71)&&(map[x-1][y+1]==-42))	//怪 
		{command=3;} 
	else if((map[x-1][y]==-95)&&(map[x-1][y+1]==-12))	//血 
		{command=4;}
	else if((map[x-1][y]==-95)&&(map[x-1][y+1]==-8))	//攻  
		{command=5;} 
	else if((map[x-1][y]==-87)&&(map[x-1][y+1]==73))	//王 	-51 -11 
		{command=6;} 
	else if((map[x-1][y]==-69)&&(map[x-1][y+1]==-94))	//虎 	-69 -94
		{command=7;} 
	else if((map[x-1][y]==-49)&&(map[x-1][y+1]==-13))	//象 	-49 -13
		{command=8;} 		 
	switch(command)
		{
			case 1:	 
				map[x-1][y]=-88;						//墙在原来的位置不变
				map[x-1][y+1]=-128;
				map[x][y]=-95;							//人也在原来的位置，不改变
				map[x][y+1]=-30;break;
		
			case 2:	 
			 	map[x-1][y]=-95;						//门在原来的位置不变
			 	map[x-1][y+1]=-14;	
			 	map[x][y]=-95;							//人也在原来的位置，不改变
			 	map[x][y+1]=-30;break;
			 
			case 3:
				attackmonster(map,peo);					//调用与怪物 1 的战斗函数 
			 	map[x-1][y]=' ';						//人物位置置0
				map[x-1][y+1]=' ';									
			 	map[x][y]=-95;							//人物向上移动
				map[x][y+1]=-30; break;
			 
			case 4:
				hpup(map,peo);
			 	map[x-1][y]=-95;						//门在原来的位置不变
			 	map[x-1][y+1]=-30;							
				map[x][y]=' ';							//人也在原来的位置，不改变 
				map[x][y+1]=' ';break;
			 
			case 5:
				ATKup(map,peo);
			 	map[x-1][y]=-95;						//人物上移 
			 	map[x-1][y+1]=-30;
				map[x][y]=' ';							//血的位置置0
				map[x][y+1]=' ';break;
			 
			case 6:
				attackboss(map,peo); 					/*与王的战斗函数*/ 
			 	map[x-1][y]=' ';						//人物位置置0
				map[x-1][y+1]=' ';									
			 	map[x][y]=-95;							//人物向上移动
				map[x][y+1]=-30; break;
				
			case 7:
				attacktiger(map,peo);					/*与虎的战斗函数*/
			 	map[x-1][y]=' ';						//人物位置置0
				map[x-1][y+1]=' ';									
			 	map[x][y]=-95;							//人物向上移动
				map[x][y+1]=-30; break;
				
			case 8:
				attackElephant(map,peo);				/*与象的战斗函数*/
			 	map[x-1][y]=' ';						//人物位置置0
				map[x-1][y+1]=' ';									
			 	map[x][y]=-95;							//人物向上移动
				map[x][y+1]=-30; break;
			
			default:	 
				map[x-1][y]=-95;						//人的位置向上移动
				map[x-1][y+1]=-30; 
				map[x][y]=' ';							//该位置置为0 
				map[x][y+1]=' ';
			}
} 

//向下移动函数 
void judgedown(char map[SIZEX][SIZEY],struct people peo[],int x,int y)
{	
	
	int command;

	if((map[x+1][y]==-88)&&(map[x+1][y+1]==-128))	//墙	-88 -128
		{command=1;}
	if((map[x+1][y]==-95)&&(map[x+1][y+1]==-14))	//门	-95 -14 
		{command=2;}
	if((map[x+1][y]==-71)&&(map[x+1][y+1]==-42))	//怪	-71 -42 
		{command=3;}
	if((map[x+1][y]==-95)&&(map[x+1][y+1]==-12))	//血	-47 -86
		{command=4;}
	if((map[x+1][y]==-95)&&(map[x+1][y+1]==-8))	//攻	-71 -91
		{command=5;}
	if((map[x+1][y]==-87)&&(map[x+1][y+1]==73))	//王 	-51 -11 
		{command=6;}
	if((map[x+1][y]==-69)&&(map[x+1][y+1]==-94))	//虎 	-69 -94
		{command=7;}
	if((map[x+1][y]==-49)&&(map[x+1][y+1]==-13))	//象 	-49 -13
		{command=8;}
		
	switch(command)
		{	
			case 1:	 
		 		map[x+1][y]=-88;						//墙在原来的位置不变
		 		map[x+1][y+1]=-128;
		 		map[x][y]=-95;							//人也在原来的位置，不改变
	 	 		map[x][y+1]=-30;break;
	 	 		
		 	case 2:	 
			 	map[x+1][y]=-95;						//门在原来的位置不变
			 	map[x+1][y+1]=-14;
			 	map[x][y]=-95;							//人也在原来的位置，不改变
			 	map[x][y+1]=-30;break;
		 
		 	case 3:
			 	attackmonster(map,peo);					//调用与怪物 1 战斗函数
				map[x+1][y]=' ';						//怪物位置置0 
				map[x+1][y+1]=' ';
				map[x][y]=-95;							//人物也在原来的位置，不改变 
				map[x][y+1]=-30;break;
		 
		 	case 4:
			 	hpup(map,peo);
			 	map[x+1][y]=-95;						//人物下移 
			 	map[x+1][y+1]=-30;
			 	map[x][y]=' ';							//血的位置置0 
			 	map[x][y+1]=' ';break;
			 	
			case 5:
				ATKup(map,peo);
			 	map[x+1][y]=-95;						//人物上移 
			 	map[x+1][y+1]=-30;
			 	map[x][y]=' ';							//位置置0 
			 	map[x][y+1]=' ';break;
		 	
		 	case 6:
		 		attackboss(map,peo); 					/*与王的战斗函数*/
				map[x+1][y]=' ';						//怪物位置置0 
				map[x+1][y+1]=' ';
				map[x][y]=-95;							//人物也在原来的位置，不改变 
				map[x][y+1]=-30;break;
			
			case 7:
		 		attacktiger(map,peo);					/*与虎的战斗函数*/
				map[x+1][y]=' ';						//怪物位置置0 
				map[x+1][y+1]=' ';
				map[x][y]=-95;							//人物也在原来的位置，不改变 
				map[x][y+1]=-30;break;
			
			case 8:
		 		attackElephant(map,peo);				/*与象的战斗函数*/
				map[x+1][y]=' ';						//怪物位置置0 
				map[x+1][y+1]=' ';
				map[x][y]=-95;							//人物也在原来的位置，不改变 
				map[x][y+1]=-30;break;
		
		 	default:	
				map[x+1][y]=-95;						//人的位置向上移动 
				map[x+1][y+1]=-30;
				map[x][y]=' ';							//该位置置为0 
				map[x][y+1]=' ';
		}
} 

//向左移动函数 
void judgeleft(char map[SIZEX][SIZEY],struct people peo[],int x,int y)
{
	
	int command;
	
	if((map[x][y-2]==-88)&&(map[x][y-1]==-128))			//墙	-88 -128
		{command=1;} 
	else if((map[x][y-2]==-95)&&(map[x][y-1]==-14))		//门 
		{command=2;} 
	else if((map[x][y-2]==-71)&&(map[x][y-1]==-42))		//怪 
		{command=3;} 
	else if((map[x][y-2]==-95)&&(map[x][y-1]==-12))		//血 
		{command=4;} 
	else if((map[x][y-2]==-95)&&(map[x][y-1]==-8))		//攻 
		{command=5;}
	else if((map[x][y-2]==-87)&&(map[x][y-1]==73))		//王 	-51 -11 
		{command=6;} 
	else if((map[x][y-2]==-69)&&(map[x][y-1]==-94))		//虎 	-69 -94
		{command=7;} 
	else if((map[x][y-2]==-49)&&(map[x][y-1]==-13))		//象 	-49 -13
		{command=8;}  
		
	switch(command)
		{	
			case 1:	
		 		map[x][y-2]=-88;						//墙在原来的位置不变 
	 	 		map[x][y-1]=-128;
		 		map[x][y]=-95;							//人也在原来的位置，不改变
		 		map[x][y+1]=-30;break;
		
		 	case 2:
			 	backroom(map,peo);break;				//返回上一个地图 
		 
		 	case 3:
			 	attackmonster(map,peo);					//调用与怪物 1 战斗函数
				map[x][y-2]=' ';						//怪物位置置0 
				map[x][y-1]=' ';
				map[x][y]=-95;							//人物也在原来的位置，不改变 
				map[x][y+1]=-30;break;
		 
		 	case 4:
			 	hpup(map,peo);							//调用加血函数  
			 	map[x][y-2]=-95;						//人物左移 
			 	map[x][y-1]=-30; 
			 	map[x][y]=' ';							//血的位置置0 
			 	map[x][y+1]=' ';break;
			 	
			case 5:
				ATKup(map,peo);							//调用加攻函数 
			 	map[x][y-2]=-95;						//人物左移 
			 	map[x][y-1]=-30;
			 	map[x][y]=' ';							//攻的位置置0 
			 	map[x][y+1]=' ';break;
		 	
		 	case 6:
			 	attackboss(map,peo); 					/*与王的战斗函数*/
				map[x][y-2]=' ';						//怪物位置置0 
				map[x][y-1]=' ';
				map[x][y]=-95;							//人物也在原来的位置，不改变 
				map[x][y+1]=-30;break;
			
			case 7:
			 	attacktiger(map,peo);					/*与虎的战斗函数*/
				map[x][y-2]=' ';						//怪物位置置0 
				map[x][y-1]=' ';
				map[x][y]=-95;							//人物也在原来的位置，不改变 
				map[x][y+1]=-30;break;
			
			case 8:
			 	attackElephant(map,peo);				/*与象的战斗函数*/
				map[x][y-2]=' ';						//怪物位置置0 
				map[x][y-1]=' ';
				map[x][y]=-95;							//人物也在原来的位置，不改变 
				map[x][y+1]=-30;break;
			
		 	default:	
				map[x][y-2]=-95;						//人物左移 
				map[x][y-1]=-30;
				map[x][y]=' ';							//原来的位置置为0 
				map[x][y+1]=' ';
		}
} 

//向右移动函数 
void judgeright(char map[SIZEX][SIZEY],struct people peo[],int x,int y)
{

	int command;

	if((map[x][y+2]==-88)&&(map[x][y+3]==-128))			//墙	-88 -128
		{command=1;} 
	else if((map[x][y+2]==-95)&&(map[x][y+3]==-14))		//门	-95 -14 
		{command=2;} 
	else if((map[x][y+2]==-71)&&(map[x][y+3]==-42))		//怪 
		{command=3;} 
	else if((map[x][y+2]==-95)&&(map[x][y+3]==-12))		//血 
		{command=4;}
	else if((map[x][y+2]==-95)&&(map[x][y+3]==-8))		//攻 
		{command=5;} 
	else if((map[x][y+2]==-87)&&(map[x][y+3]==73))		//王 	-51 -11  
		{command=6;} 
	else if((map[x][y+2]==-69)&&(map[x][y+3]==-94))		//虎 	-69 -94
		{command=7;} 
	else if((map[x][y+2]==-49)&&(map[x][y+3]==-13))		//象 	-49 -13
		{command=8;} 
	
	switch(command)
		{	case 1:							
		 		map[x][y+2]=-88;						//墙在原来的位置不变 
		 		map[x][y+3]=-128;
		 		map[x][y]=-95;							//人也在原来的位置，不改变
	 	 		map[x][y+1]=-30;break;
		
		 	case 2:nextroom(map,peo);break;				//进入下一个地图的函数 
		 
		 	case 3:
			 	attackmonster(map,peo);					//调用与怪物 1 战斗函数
				map[x][y+2]=' ';						//怪物置置0 
				map[x][y+3]=' ';
				map[x][y]=-95;							//人物在原来的位置，不改变 
				map[x][y+1]=-30;break;
		 
		 	case 4:
			 	hpup(map,peo);							//调用加血函数 
				map[x][y+2]=-95;						//人物右移 
				map[x][y+3]=-30; 
			 	map[x][y]=' ';							//位置置0 
			 	map[x][y+1]=' ';break;
			 	
			case 5:
				ATKup(map,peo); 						//调用加攻击的函数 
				map[x][y+2]=-95;						//人物右移 
				map[x][y+3]=-30;
			 	map[x][y]=' ';							//位置置0 
			 	map[x][y+1]=' ';break;
			
			case 6:
			 	attackboss(map,peo); 					/*与王的战斗函数*/
				map[x][y+2]=' ';						//怪物置置0 
				map[x][y+3]=' ';
				map[x][y]=-95;							//人物在原来的位置，不改变 
				map[x][y+1]=-30;break;
			
			case 7:
			 	attacktiger(map,peo);					/*与虎的战斗函数*/
				map[x][y+2]=' ';						//怪物置置0 
				map[x][y+3]=' ';
				map[x][y]=-95;							//人物在原来的位置，不改变 
				map[x][y+1]=-30;break;
			
			case 8:
			 	attackElephant(map,peo);				/*与象的战斗函数*/
				map[x][y+2]=' ';						//怪物置置0 
				map[x][y+3]=' ';
				map[x][y]=-95;							//人物在原来的位置，不改变 
				map[x][y+1]=-30;break;
		 
		 	default:	
				map[x][y+2]=-95;						//人的位置向右移动 
				map[x][y+3]=-30;
				map[x][y]=' ';							//该位置置为0 
				map[x][y+1]=' ';
		}
} 
//墙	-88 -128
//怪	-71 -42 
//血	-95 -12
//攻	-95 -8
//人	-95 -30
//门	-95 -14 
//王 	-51 -11 
//虎 	-69 -94
//象 	-49 -13
//F1的ASCII码 59 
//Tab   9 
