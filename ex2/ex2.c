#include <stdio.h>
struct std
{
	char name[20];
	char sex;
	char year;
};
void main(void)
{
	struct std std1={
	"wfx",
	'm',
	23
	};
	printf("std1.name=%s\n",std1.name);
}
