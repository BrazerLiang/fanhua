#include<cstdio>
#include<cstring>
int main()
{
	char ans[90];
	char cans[90][90];
	int i;
	int r=0, h=0;
	gets_s(ans,89);
	for (i = 0; i < 81; i++)
	{
		if (ans[i] != ' ')
			cans[r][h++] = ans[i];
		else if (ans[i] == ' ')
		{
			cans[r][h] = '\0';
			h = 0;
			r += 1;
		}
	}
	for (i = r; i >= 0; i--)
	{
		printf("%s", cans[i]); if (i > 0)printf(" ");
	}
}
