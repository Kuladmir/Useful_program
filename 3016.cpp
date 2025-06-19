#include<stdio.h>
#define Enzmye_mw 37510 // 酶的分子量为37510 Da
#define Volumn 200 // 默认体积为200 μL
#define Con_sub 5 // 默认底物浓度为5 mM
int main()
{
	printf("<------------------计算酶反应中酶的用量------------------>\n");
	printf("------------------默认体积为200 μL，默认酶的分子量为37510(pt)，默认底物浓度为5 mM------------------\n");
	int number[10];
	int i, j;
	double v[10], percent[10], con_m[10], percent_sub[10];
	printf("请输入要计算的酶的数量:> ");
	scanf("%d", &j);
	for (i = 0; i < j; i++)
	{
		printf("请输入第%d个酶的浓度(单位为mg/mL):> ", i + 1);
		scanf("%lf", &con_m[i]);
		printf("请输入第%d个酶的百分比(单位为%%):> ", i + 1);
		scanf("%lf", &percent[i]);
		v[i] = ((5 * 0.01 * percent[i] * 1e-6 * Volumn * Enzmye_mw) / (con_m[i]))* 1000;
	}
	printf("\n酶的用量计算结果如下:\n");
	for (i = 0; i < j; i++)
	{
		printf("第%d个酶的用量为: %.2lf μL\n", i + 1, v[i]);
	}
	return 0;
}