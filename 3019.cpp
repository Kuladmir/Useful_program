#include<stdio.h>
#include<string.h>
void calc()
{
	char sequence[2000];
	char* residue = sequence;
	int length = 0, i = 0;
	double mw = 0;
	printf("请输入要计算的蛋白质的一级结构（氨基酸序列）:>");
	gets_s(sequence);
	printf("\n");
	length = strlen(sequence);
	for (i = 0; i < length; i++)
	{
		if (*(residue+i) == 'G')
			mw += 75.07;
		if (*(residue + i) == 'A')
			mw += 89.09;
		if (*(residue + i) == 'V')
			mw += 117.15;
		if (*(residue + i) == 'L')
			mw += 131.17;
		if (*(residue + i) == 'I')
			mw += 131.17;
		if (*(residue + i) == 'F')
			mw += 165.19;
		if (*(residue + i) == 'W')
			mw += 204.23;
		if (*(residue + i) == 'Y')
			mw += 181.19;
		if (*(residue + i) == 'D')
			mw += 133.1;
		if (*(residue + i) == 'H')
			mw += 155.16;
		if (*(residue + i) == 'N')
			mw += 132.12;
		if (*(residue + i) == 'E')
			mw += 147.13;
		if (*(residue + i) == 'K')
			mw += 146.19;
		if (*(residue + i) == 'Q')
			mw += 146.15;
		if (*(residue + i) == 'M')
			mw += 149.21;
		if (*(residue + i) == 'R')
			mw += 174.2;
		if (*(residue + i) == 'S')
			mw += 105.09;
		if (*(residue + i) == 'T')
			mw += 119.12;
		if (*(residue + i) == 'C')
			mw += 121.16;
		if (*(residue + i) == 'P')
			mw += 115.13;
	}
	mw = mw - 18 * (length - 1); 
	printf("输入的这个蛋白的分子量是 :> %.2lf", mw);
	printf("\n");
}
int main()
{
	printf("=========欢迎使用本程序=========\n");
	calc();
	return 0;
}