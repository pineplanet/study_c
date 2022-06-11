#include <stdio.h>

int main(void)
{
	float vision;

	fputs(" scanf - float \n ",stdout);

	fprintf(stderr, "당신의 시력은 ? \n");
	
	fscanf(stdin, "%f", &vision);

	fprintf(stderr, "당신의 시력은 %.1f\n", vision);

	fputs(" %f == > float , %lf ==>double ",stdout);
	return 0;
}
