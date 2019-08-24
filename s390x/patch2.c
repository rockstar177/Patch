#include <stdio.h>

int main(void)
{
 	FILE * f = fopen("binary", "r+b");
	unsigned int opcode = 0xa718000a;
	fseek(f,0x896,SEEK_SET);
	fwrite(&opcode,sizeof(opcode),1,f);
	fclose(f);
	return 0;
}
