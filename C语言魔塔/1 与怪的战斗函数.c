#include "peo.c" 
void attackmonster(char map[SIZEX][SIZEY],struct people peo[])
{
	int panduan;
	for(panduan=0;peo[1].hp>0&&peo[0].mark!=0;panduan++)			//peo[0]为人物 peo[1]为怪物 
	 	{ 
	  		peo[1].hp=peo[1].hp-peo[0].gj;							//人攻击怪物 
	 		if(peo[1].hp<0)											//当怪物生命值小于0时，令它为0 
	  			{peo[1].hp=0;}
			peo[0].hp=peo[0].hp-peo[1].gj;							//怪物攻击人
	  		if(peo[0].hp<=0)										//当人物生命小于0时，输了 
	  			{peo[0].mark=0;}
			map_put(map,peo);											//战斗后输出，每攻击一次，输出地图一次，
						
			if(peo[1].hp!=0)										//战斗过程的信息输出 
				{
				setcolor(8,0);
				printf("\n你受到");
				setcolor(9,0);
				printf(" %d ",peo[1].gj);
				setcolor(8,0);
				printf("点伤害\t\t");
				
			 	printf("你剩余");
			 	setcolor(9,0);
			 	printf(" %d ",peo[0].hp);
			 	setcolor(8,0);
			 	printf("点生命\n");
			 	
			 	printf("%s 受到",peo[1].name);
			 	setcolor(9,0);
			 	printf(" %d ",peo[0].gj);
			 	setcolor(8,0);
			 	printf("点伤害\t",peo[1].name,peo[0].gj);
			 	
			 	printf("%s 剩余",peo[1].name);
			 	setcolor(9,0);
			 	printf(" %d ",peo[1].hp);
			 	setcolor(8,0);
			 	printf("点生命\n");
				}
			else
				{
				setcolor(8,0);
				printf("\n你受到");
				setcolor(9,0);
				printf(" %d ",peo[1].gj);
				setcolor(8,0);
				printf("点伤害\t\t");
				setcolor(7,0);printf("%s 死亡\n",peo[1].name);
				}

			system("pause");
			system("cls");
	 	}
	
	strcpy(peo[1].name,"怪"); 									//给类型1的怪物赋初值 
	peo[1].hp=5;
	peo[1].gj=2;
	peo[1].mark=1;
}
