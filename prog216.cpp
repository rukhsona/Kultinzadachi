// �㭪�� starline �뢮��� ��ப� �� ������祪
#include "stdio.h"
#include "conio.h"

// �뢮��� ��ப� �� ������祪
void starline(int len)
{
    for (int i = 0; i < len; i++)
        putch('*');
}

void main()
{
    starline(10);
    puts("\n��� �����襭�� ࠡ��� �ணࠬ�� ������ <Enter>");
    getch();
}

