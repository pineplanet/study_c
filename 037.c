#include <stdio.h>

struct Book
{
	char title[20];
	char author[20];
	int series;
};
typedef struct Book Book;

int main(void)
{
	Book b1 = {"태백산맥","조정래", 10},b2 = {"토 지","박경리",20};
	Book tmp;

	puts("-----------------------------");
	puts(" * 구조체 맞교환 *");
	puts("-----------------------------");

	printf(" b1: %10s %10s %4d권 \n", b1.title,b1.author, b1.series);
	printf(" b1: %10s %10s %4d권 \n", b1.title,b1.author, b1.series);
	puts("-----------------------------");

	tmp = b1; 
	b1 = b2;
	b2 = tmp;

	puts(" * 교환 후");
	printf(" b1: %10s %10s %4d권 \n", b1.title,b1.author, b1.series);
	printf(" b1: %10s %10s %4d권 \n", b1.title,b1.author, b1.series);
	puts("-----------------------------");

	puts(" 구조체 맞교환은 정수교환과 동일");

	return 0;
}
