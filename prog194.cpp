// �८�ࠧ�� ����筮� �᫮ � �����筮�
#include <stdio.h>
#include <conio.h>
#include "string.h"
void main()
{
    char bin[16];    // ����ࠦ���� ����筮�� �᫠
    long int dec;    // �����筮� �᫮
    int i;           // ����� ࠧ�鸞 ����筮�� �᫠
    int v;           // ��� i-�� ࠧ�鸞 ����筮�� �᫠

    printf("������ ���쬨ࠧ�來�� ����筮� �᫮ ");
    printf("� ������ <Enter>");
    printf("->");
    scanf("%s", &bin);

    dec = 0;
    v = 1;    // ��� ����襣� (0-��) ࠧ�鸞 ����筮�� �᫠
    for ( i = strlen(bin) -1; i >= 0; i--)
    {
      if ( bin[i] == '1' )
     dec += v;
      v *= 2;     // ��� ᫥���饣� ࠧ�鸞
    }
    printf("����筮�� ��� %s", bin);
    printf(" ᮮ⢥����� �����筮� %d", dec);

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

