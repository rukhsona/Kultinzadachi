// �㭪�� length ������ ����� ��ப� ᨬ�����
#include "stdio.h"
#include "conio.h"


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
    char st[80]; // ��ப�
    int len;     // ����� ��ப�

    printf("������ ��ப� ᨬ����� � ������ <Enter>\n");
    printf("->");
    
    // �᫨ �� ��������� ��ப� ���� �஡���, � scanf
    // ������ ⮫쪮 ���� ��ப� - �� ��ࢮ�� �஡���
    // ���⮬� �㤥� �ᯮ�짮���� �㭪�� gets 
    gets(st);
    len = length(st);

    printf("����� ��������� ��ப�: %i",len);

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

