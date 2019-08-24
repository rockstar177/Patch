#include <stdio.h>

int main(void)
{
	FILE * file = fopen("binary","r+b");
	unsigned short opcode = 0x2360;
	fseek(file,0x602,SEEK_SET);
	fwrite(&opcode,sizeof(opcode),1,file);
	opcode = 0xd004;
	fseek(file,0x610,SEEK_SET);
	fwrite(&opcode,sizeof(opcode),1,file);
	fclose(file);
	return 0;
}
