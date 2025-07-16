#include<stdio.h>
void hello()
{
	printf("============欢迎使用本程序============\n");
}
void calc()
{
	int COUNT = 0, i = 0;
	printf("说明：目的计算某反应中某反应中需要加入的酶的体积(μL)\n");
	printf("请输入要计算的组数（参数包括：蛋白分子量(da)，反应体积(μL)，蛋白浓度(mg/mL)，蛋白量(%%），底物浓度(mmol/L):>");
	scanf("%d", &COUNT);
	printf("\n");
	double con[100];
	double vol[100];
	double mw[100];
	double need_con[100];
	double sub_con[100]; 
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
		printf("请输入第 %d 组的蛋白用量(%%)：", i + 1);
		scanf("%lf", &need_con[i]);
		printf("\n");
		printf("请输入第 %d 组的底物浓度(mmol/L)：", i + 1);
		scanf("%lf", &sub_con[i]);
		printf("\n");
	}
	for (i = 0; i < COUNT; i++)
	{
		vol_calc[i] = (sub_con[i] * 0.01 * need_con[i] * 1e-3 * vol[i] * mw[i]) / (con[i]);
	}
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