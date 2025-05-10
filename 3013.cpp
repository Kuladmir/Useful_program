#include <stdio.h>
#define GFP 28530
#define UB 9390
#define UBA 118690
#define UBC9 20130
#define UBC9_P4 18680
#define UBC9_TEP4 20150
#define SUMO 12360
#define GFP_C 15
#define UB_C 75
#define UBA_C 0.5
#define UBC_C 30
#define COUNT 6 //除去SUMO
int i;
void calculate()
{
	double con[COUNT];
	double vol[COUNT];
	printf("\t\t\t---------------说明：总反应体积为50 μL，因此将以此开始计算---------------\n");
	printf("\n");
	printf("\n");
	printf("*****请依次输入6个蛋白的浓度(mg/mL)，顺序分别是 GFP  UB  UBA1A  UBC9  UBC9_P4  UBC9_TeP4\n");
	printf("***请输入:>");
	for (i = 0; i < COUNT; i++)
		scanf("%lf", &con[i]);
	vol[0] = (GFP_C * 50 * GFP)*(1e-6)/(con[0]);// GFP
	vol[1] = (UB_C * 50 * UB) * (1e-6) / (con[1]);// UB
	vol[2] = (UBA_C * 50 * UBA) * (1e-6) / (con[2]);//UBA1A
	vol[3] = (UBC_C * 50 * UBC9) * (1e-6) / (con[3]);// UBC9
	vol[4] = (UBC_C * 50 * UBC9_P4) * (1e-6) / (con[4]);// UBC9_P4
	vol[5] = (UBC_C * 50 * UBC9_TEP4) * (1e-6) / (con[5]);// UBC9_TeP4
	printf("****将依次输出6个蛋白的体积(μL)，顺序分别是 GFP  UB  UBA1A  UBC9  UBC9_P4  UBC9_TeP4\n");
	for (i = 0; i < COUNT; i++)
		printf("%.2lf   ", vol[i]);
	printf("\n");
}
int main()
{
	calculate();
	return 0;
}