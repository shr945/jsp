#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int time_min = 10000;
int num_p = 0;
int num_m = 0;
int all_gongjian = 0;			//一个方案所有机器所需加工的工件总数
int all_mach = 100;				//不同机器方案的总数

int p_gongjian[100] = { 0 };		//不同产品工件运行加工总数
int m_gongjian[100] = { 0 };		//不同机器上的工件运行总数


int changpin[1000][1000][4];          //产品，产品加工顺序，机器，时间。
int changpin1[1000][1000][4]; 
int process[1000][1000][5] = { 0 };			//产品	次序	时间，机器

int machine[1000][100][100][5] = { 0 };		//num1机器	num2运行程序次序	时间，产品. 起始时间，结束时间,cixu

int better[10][100][100][5] = { 0 };

int parent[2][100][100][5] = { 0 };
int children[10][100][100][5] = { 0 };
int Best[1][100][100][5] = { 0 };
int Best1[1][100][100][5] = { 0 };
int time_m[1000] = { 0 };						//记录时间，按次序
int time_changpin[1000]={0};
int j_m=-1;           //检修机器和检修时间 
int j_t=0;
int a_jx[100]={0};     //每个机器的检修时间 
int ma=-1;       //该机器上正好哪个该被检修 
int state=0; 
int counttime=-1;
int mc=-1;
int d[100]={0};
int e[100]={0};
int f[100]={0};
int g[100]={0};
double wgt;

