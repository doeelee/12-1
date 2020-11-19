#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    FILE *fp;
    char c;
    
    fp = fopen("sample.txt", "r");
    if (fp == NULL)
    {
    	return -1;
	}
	
	while ( (c=fgetc(fp)) != EOF ) {
		printf("%c", c);
	}
	
	
	fclose(fp);
	
	return 0;
}

