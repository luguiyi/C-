#include "peo.c" 
void attackElephant(char map[SIZEX][SIZEY],struct people peo[])
{
	int panduan;
	for(panduan=0;peo[4].hp>0&&peo[0].mark!=0;panduan++)			//peo[0]为人物 peo[4]为象 
	 	{ 
	  		peo[4].hp=peo[4].hp-peo[0].gj;							//人攻击象 
	 		if(peo[4].hp<0)											//当象生命值小于0时，令它为0 
	  			{peo[4].hp=0;}
			peo[0].hp=peo[0].hp-peo[4].gj;							//象攻击人
	  		if(peo[0].hp<=0)										//当人物生命小于0时，输了 
	  			{peo[0].mark=0;}
			map_put(map,peo);											//战斗后输出，每攻击一次，输出地图一次，
						
			if(peo[4].hp!=0)										//战斗过程的信息输出 
				{
				setcolor(8,0);
				printf("\n你受到");
				setcolor(9,0);
				printf(" %d ",peo[4].gj);
				setcolor(8,0);
				printf("点伤害\t\t");
				
			 	printf("你剩余");
			 	setcolor(9,0);
			 	printf(" %d ",peo[0].hp);
			 	setcolor(8,0);
			 	printf("点生命\n");
			 	
			 	printf("%s 受到",peo[4].name);
			 	setcolor(9,0);
			 	printf(" %d ",peo[0].gj);
			 	setcolor(8,0);
			 	printf("点伤害\t",peo[4].name,peo[0].gj);
			 	
			 	printf("%s 剩余",peo[4].name);
			 	setcolor(9,0);
			 	printf(" %d ",peo[4].hp);
			 	setcolor(8,0);
			 	printf("点生命\n");
				}
			else
				{
				setcolor(8,0);
				printf("\n你受到");
				setcolor(9,0);
				printf(" %d ",peo[4].gj);
				setcolor(8,0);
				printf("点伤害\t\t");
				setcolor(7,0);printf("%s 死亡\n",peo[4].name);
				}

			system("pause");
			system("cls");
	 	}
	
	strcpy(peo[4].name,"象");
	peo[4].hp=20;
	peo[4].gj=1;
	peo[4].mark=1;
}
