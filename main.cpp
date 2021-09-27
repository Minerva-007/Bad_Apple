#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h"
#include"windows.h"
#include"new.txt"
//int arr[4382][28][36]=
char   ch[4382][28][38];
void gotoxy(int x, int y) { 
    COORD pos = {x, y};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}
int main()
{
	for(int i=0;i<4382;i++)
	{
		for(int j=0;j<28;j++)
		{
				/*putch(arr[i][j][0]);
				putch(arr[i][j][1]);
				putch(arr[i][j][2]);
				putch(arr[i][j][3]);
				putch(arr[i][j][4]);
				putch(arr[i][j][5]);
				putch(arr[i][j][6]);
				putch(arr[i][j][7]);
				putch(arr[i][j][8]);
				putch(arr[i][j][9]);
				putch(arr[i][j][10]);
				putch(arr[i][j][11]);
				putch(arr[i][j][12]);
				putch(arr[i][j][13]);
				putch(arr[i][j][14]);
				putch(arr[i][j][15]);
				putch(arr[i][j][16]);
				putch(arr[i][j][17]);
				putch(arr[i][j][18]);
				putch(arr[i][j][19]);
				putch(arr[i][j][20]);
				putch(arr[i][j][21]);
				putch(arr[i][j][22]);
				putch(arr[i][j][23]);
				putch(arr[i][j][24]);
				putch(arr[i][j][25]);
				putch(arr[i][j][26]);
				putch(arr[i][j][27]);
				putch(arr[i][j][28]);
				putch(arr[i][j][29]);
				putch(arr[i][j][30]);
				putch(arr[i][j][31]);
				putch(arr[i][j][32]);
				putch(arr[i][j][33]);
				putch(arr[i][j][34]);
				putch(arr[i][j][35]);*/
				//sprintf(ch[j],"%.36s\n",arr[i][j]);
				memcpy(ch[i][j], arr[i][j], 36);
				ch[i][j][36]='\n';
				ch[i][j][37]=' ';
		}
		ch[i][27][37]=0;
	}
	printf("done.");
	getch();
	for(int i=0;i<4382;i++)
	{
		puts((char*)ch[i]);
		Sleep(50);
		gotoxy(0,0);
	}
}