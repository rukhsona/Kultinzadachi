// �㭪�� upcase
#include "stdio.h"
#include "conio.h"

// �㭪�� �८�ࠧ������ ������ �㪢 � �ய���
char* upcase(char *st)
{
    int i = 0;
    while ( st[i] )
    {
        if (st[i] >= 'a' && st[i] <= 'z' ||   // ��⨭᪨�
                st[i] >= '�' && st[i] <= '�')  // ���᪨�
            st[i] -= 32;
        else if (st[i] >= '�' && st[i] <= '�')
                st[i] -= 80;
        i++;
    }
    return st;
}

//  �ਬ�� �ᯮ�짮����� �㭪樨 upcase
void main()
{
    char st[80];

    puts(" ������ ��ப� ⥪�� � ������ <Enter>");
    printf("->");
    gets(st);
    puts(upcase(st));

    puts("\n��� �����襭�� ������ <Enter>");
    getch();
}

