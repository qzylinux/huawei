#include <stdio.h>
#include <string.h>
typedef enum {
	false, true
} bool;
//等于0会有问题，无法区分编号0和初始0
unsigned int list[100000] = { 0 };
unsigned int book[1000][1000] = { 0 };

bool func(unsigned int mo, unsigned int demo)
{
	unsigned int x = list[demo];
	unsigned int y = list[x];

	if (x == 0 || y == 0)
		return false;
	if (book[x][y] == 1)
		return true;
	else
		return func(x, y);
}


void AddDependency(unsigned int Moduleld, unsigned int DependModuleld)
{
	list[Moduleld] = DependModuleld;
}

bool ModulelsCycularDependency(unsigned int Moduleld)
{
	unsigned int x = Moduleld;
	unsigned int y = list[x];
	if (y == 0)
		return false;
	else
		book[x][y] = 1;

	return func(x, y);
}



void clear(void)
{
	memset(book, 0, sizeof(unsigned int) * 1000 * 1000);
}

int main(void)
{
	int i = 0;
	int re=-1;
	unsigned int a[8] = { 0 };
	for (i = 0; i<8; i++)
		scanf("%d", &a[i]);
	for(i=0;i<7;i+=2)
		AddDependency(a[i],a[i+1]);
	for (i = 0; i<8; i++)
		printf("%d", list[i]);
	re=ModulelsCycularDependency(a[0]);
	printf("\n%d", re);
	return 0;
}



