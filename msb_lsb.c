#include <stdio.h>
int main(){
	short a = 0x0110;
	char *p = (char *)&a;
	printf("%2x , %4x \n",*p,a);

	short b = 0xFFFF;
	printf("%d \n",b>>4);
	printf("%x \n",b>>4);

	unsigned short c = 0xffff;
	printf("%d \n",c>>4);
        printf("%x \n",c>>4);

	return 0;
}

