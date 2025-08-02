#include<stdio.h>
void hello()
{
	printf("==========欢迎使用本程序==========\n");
	printf("\n");
	printf("\n");
}
void calc()
{	
	int COUNT = 0,i = 0;
	printf("说明：目的计算某反应中某蛋白所需要加入的体积(μL)\n");
	printf("请输入要计算的组数（参数包括：蛋白分子量(da)，反应体积(μL)，蛋白浓度(mg/mL)，蛋白需要浓度(μmol/L)）:>");
	scanf("%d", &COUNT);
	printf("\n");
	double con[100];
	double vol[100];
	double mw[100]; 
	double need_con[100];
	double vol_calc[100];
	for (i = 0; i < COUNT; i++)
	{
		printf("请输入第 %d 组的蛋白分子量(da)：", i + 1);
		scanf("%lf", &mw[i]);
		printf("\n");
		printf("请输入第 %d 组的反应体积(uL)：", i + 1);
		scanf("%lf", &vol[i]);
		printf("\n");
		printf("请输入第 %d 组的蛋白浓度(mg/mL)：", i + 1);
		scanf("%lf", &con[i]);
		printf("\n");
		printf("请输入第 %d 组的蛋白终浓度(umol/L)：", i + 1);
		scanf("%lf", &need_con[i]);
		printf("\n");
	}
	for (i = 0; i < COUNT; i++)
	{
		vol_calc[i] = (need_con[i] * vol[i] * mw[i]) * (1e-6) / (con[i]);
	}i
	for (i = 0; i < COUNT; i++)
	{
		printf("第 %d 组需要加的蛋白的体积(μL)：%.2lf\n", i + 1, vol_calc[i]);
	}
}
int main()
{
	hello();
	calc();
	return 0; 

}
