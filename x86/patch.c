#include <stdio.h>

int main(void)
{
	FILE * file = fopen("binary","r+b");
	unsigned char opcode = 0x74;
	fseek(file,0x6a1,SEEK_SET);
	fwrite(&opcode,sizeof(opcode),1,file);
	fclose(file);
	return 0;
}
