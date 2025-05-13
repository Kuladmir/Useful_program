#include<stdio.h>
#define N 10
void introduction()
{
	printf("本程序用来快速计算化合物的用量\n");
	printf("-------------------------这只是个分割线-------------------------\n");
	printf(">>>>默认最多计算<<<   %d   >>>个化合物用量<<<<\n", N);
}
void calc()
{
	double comp[N];
	double Con[N];
	double Vol[N];
	int count;
	int bools;
	int i;
	printf("如果是要计算称量的质量(g)，请输入1；如果是要计算浓度(mol/L)，请输入2 :> ");
	scanf("%d", &bools);
	switch (bools)
	{
		case 1:
		{
			printf("请输入要计算多少个化合物 :> ");
			scanf("%d", &count);
			for (i = 0; i < count; i++)
			{
				printf("请输入第  %d  个化合物的分子量(g/mol) :> ", i + 1);
				scanf("%lf", &comp[i]);
				printf(">\n");
				printf("请输入第  %d  个化合物的浓度(mol/L) :> ", i + 1);
				scanf("%lf", &Con[i]);
				printf(">\n");
				printf("请输入第  %d  个化合物的体积(L) :> ", i + 1);
				scanf("%lf", &Vol[i]);
				printf("\n");
			}
			for (i = N - 1; i >= count; i--)
			{
				comp[i] = 0;
				Con[i] = 0;
				Vol[i] = 0;
			}
			for (i=0;i<count;i++)
			{
				printf("第%d个化合物的质量为: %.2lf  g\n", i+1, comp[i] * Con[i] * Vol[i]);
			}
		}break;
		case 2:
		{
			printf("请输入要计算多少个化合物:>");
			scanf("%d", &count);
			for (i = 0; i < count; i++)
			{
				printf("请输入第%d个化合物的分子量(g/mol)  :> ", i + 1);
				scanf("%lf", &comp[i]);
				printf("请输入第%d个化合物的质量(g)  :>  ", i + 1);
				scanf("%lf", &Con[i]);
				printf("请输入第%d个化合物的体积(L)  :>  ", i + 1);
				scanf("%lf", &Vol[i]);
				printf("\n");
			}
			for (i = N - 1; i >= count; i--)
			{
				comp[i] = 0;
				Con[i] = 0;
				Vol[i] = 0;
			}
			for (i = 0; i < count; i++)
			{
				printf("第%d个化合物的浓度(mol/L)为: %.2lf\n", i+1, (Con[i] / comp[i]) / Vol[i]);
			}
		}break; 
	}

}
int main()
{
	introduction();
	calc();
	return 0;
}