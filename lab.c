#include <stdio.h>

//Please Note, I did not write this function. It was writtin in the lab file.
void bit_print(int v)
{ 
	int i, mask = 1<<31; /* mask = 100....0*/
	for (i =1; i <= 31; ++i)
	{
		putchar (((v & mask)==0) ? '0': '1');
		v <<=1;
		if (i % 8 == 0 && i !=32)
			putchar (' ');
	}
}

//Please Note, I did not write this function. It was writtin in the lab file.
int pack(char a,char b,char c,char d)
{ 
	int p =a; /*p will be packed with a,b,c,d */
	p=(p<<8) | b;
	p=(p<<8) | c;
	p=(p<<8) | d;
	return p;
}

//post-lab function
void unpack (int p, char *a, char *b, char *c, char *d)
{
	*d = p;
	*c = (p >> 8);
	*b = (p >> 16);
	*a = (p >> 24);
}

int main()
{
	//Please note, tha sample bellow were asked to do.
	printf ("abcd = ");
	int p = pack('a','b','c','d');
	bit_print(p);
	putchar('\n');
	
	//post lab
	char x,y,z,j;
	unpack(p, &x, &y, &z, &j);
	printf("unpack: %c %c %c %c\n", x,y,z,j);
}
