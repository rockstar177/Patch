
#include <stdio.h>

int main(void)
{
	FILE * f = fopen("binary","r+b");
	unsigned long opcode = 0x10620008;
	fseek(f,0x824,SEEK_SET);
	fwrite(&opcode,sizeof(opcode),1,f);
	fclose(f);
	return 0;	
}
