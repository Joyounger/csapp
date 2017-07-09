// author：linyang 942510346@qq.com
// date:17.4.12


#include <stdio.h>

typedef unsigned char *byte_pointer;


void show_bytes(byte_pointer start, int len)
{
	int i;
	for (i = 0; i < len; i++) {
		printf("%.2x\n", start[i]);
	}
	printf("\n");
}

void show_int(int x)
{
	show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x)
{
	show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void* x)
{
	show_bytes((byte_pointer)&x, sizeof(void *));
}

int main(int argc, char const *argv[])
{
	int val = 0x87654321;
	byte_pointer valp = (byte_pointer)&val;
	show_bytes(valp, 1); // A
	show_bytes(valp, 2); // B
	show_bytes(valp, 3); // C

	return 0;
}




/*
kolya@asus ~/src/csapp/chap2_Representing_and_Manipulating_Information/practice $ ./2.5 
21

21
43

21
43
65

*/


