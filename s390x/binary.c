#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int c = 32;
	printf("0x%x\n",c);
	if(c == rand())
	  printf("Succsess!\n");
	return 0;
}
