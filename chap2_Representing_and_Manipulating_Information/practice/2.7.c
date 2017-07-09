// author：linyang 942510346@qq.com
// date:17.4.12


#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;


void show_bytes(byte_pointer start, int len)
{
	int i;
	for (i = 0; i < len; i++) {
		printf("%.2x\n", start[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	const char *s = "abcdef";
	show_bytes((byte_pointer)s, strlen(s));

	return 0;
}



/*
kolya@asus ~/src/csapp/chap2_Representing_and_Manipulating_Information/practice $ ./2.7
61
62
63
64
65
66

*/