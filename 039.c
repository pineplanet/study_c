#include <stdio.h>
#include <string.h>

struct Book
{
	char title[20];
	char author[20];
	int series;
};
typedef struct Book Book;

int main(void)
{
	Book b1 = {"태백산맥","조정래",10},b2 = {"토 지","박경리",20};
	Book tmp;

	puts("------------------------------");
	puts(" *구조체 입출력 *");
	puts("------------------------------");
	
	printf(" 읽고 싶은 대하 소설은: ");
	gets(b1.title);
	
	printf("그 소설의 저자는: ");
	gets(b1.author);

	printf("시리즈는 몇 권 인가요: ");
	scanf("%d", &b1.series);

	printf(" b1: %10s %10s %4d권 \n", b1.title, b1.author,b1.series);

	puts(" 구조체 입출력은 구조체 변수, 멤버 변수명 형태");

	return 0;
}
