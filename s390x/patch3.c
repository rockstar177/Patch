#include <stdio.h>
int main(void)
{
	FILE * f = fopen("binary","r+b");
	unsigned int opcode = 0xa7180060;
	fseek(f,0x896,SEEK_SET);
	fwrite(&opcode,sizeof(opcode),1,f);
	opcode = 0xa7840008;
	fseek(f,0x8c2,SEEK_SET);
	fwrite(&opcode,sizeof(opcode),1,f);
	fclose(f);
	return 0;	
}
