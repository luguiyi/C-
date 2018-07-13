#include "peo.c" 
main()
{
	system("mode con cols=90 lines=25");
	char map[SIZEX][SIZEY];										//这里定义的map为实参 
 	struct people peo[10];										//初始化，开辟储存空间 	 	
	void assignin(char map[SIZEX][SIZEY],struct people peo[]);	//对赋值函数进行声明
	void put(char map[SIZEX][SIZEY],struct people peo[]);		//声明输出函数进行声明 
	void move(char map[SIZEX][SIZEY],struct people peo[]);		//声明移动函数 
	
	map_assignin(map,peo);										//地图 1 赋值 
	people_assignin(map,peo); 									//人物赋值 
	map_put(map,peo); 											//地图输出 
	move(map,peo);												//移动函数
	
}
//总共1440行代码 
//制作人： 软件15-3 班    陆桂熠 
//制作时间：2016年6月1日 
/*
学院：计算机与信息工程学院
专业：软件工程
班级：软件15-3
姓名：陆桂熠
学号：2015025795
*/
