#include <stdio.h>

int main(void)
{
	FILE * file = fopen("binary","r+b");
	unsigned int opcode = 0xa7840008;
	fseek(file,0x834,SEEK_SET);
	fwrite(&opcode,sizeof(opcode),1,file);
	fclose(file);
}
