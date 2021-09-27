#include"conio.h"
#include"stdio.h"
int main()
{
	char ch=fgetc(stdin);
	while(ch!=EOF)
	{
		switch(ch)
		{
			case '1':
				fputc('3',stdout);
				fputc('2',stdout);
				break;
			case '0':
				fputc('2',stdout);
				break;
			case '2':
				fputc('1',stdout);
				break;
			case '[':
				fputc('{',stdout);
				break;
			case ']':
				fputc('}',stdout);
				break;
			default:
				fputc(ch,stdout);
		}
		ch=fgetc(stdin);
	}
}