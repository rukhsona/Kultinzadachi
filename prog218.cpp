// �㭪�� line �뢮��� �� �࠭ ��ப� �� ᨬ�����
#include "stdio.h"
#include "conio.h"

// �뢮��� �� �࠭ ��ப� �������
// �� n ch-ᨬ�����
void line(char ch, int n)
{
    for (int i = 0; i < n; i++)
        putch(ch);
}

// �����頥� ����� ��ப�
int length(char* st)
{
    int l = 0;  // ����� ��ப�
    char* p = st;  // 㪠��⥫� �� ᨬ���
    
    while ( *p++  )
        l++;
    return(l);
}

void main()
{
    char mes[] = "Hello, World!\0";
    int len;

    len = length(mes);

    line('*', len);
    
    printf("\nHello, World!\n");
    line('*',len);
    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

