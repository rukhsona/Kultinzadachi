// �८�ࠧ�� ��⭠����筮� �᫮ � �����筮�
// ࠧ������� � ��९��������!
#include <stdio.h>
#include <conio.h>
#include "string.h"
void main()
{
    char st[5];      // ��⭠����筮� �᫮
    unsigned int dec;// �����筮� �᫮, ᮮ⢥�����饥
    int v;           // ��� ࠧ�鸞 ��⭠����筮�� �᫠
    int err = 0;     // err == 1 - � ��ப� �������⨬� ᨬ���
    int i;

    printf("������ ��⭠����筮� ");
    printf("(�� ����� 4-� ������) �᫮\n");
    printf("-> ");
    scanf("%s",&st);

    // �८�ࠧ㥬 ��������� ��ப� � ���孥�� ॣ�����
    strupr(st);

    dec = 0;
    v = 1;    // ��� ����襣� ࠧ�鸞 ��⭠����筮�� �᫠
    for ( i = strlen(st) -1; i >= 0; i--)
    {
      //printf("\n%d\n",v);
      if (st[i] >= '0' && st[i] <= '9')
     dec += v * (st[i]- 48); // (int)'0'=48, (int)'1'=49 � �.�.
      else
     if (st[i] >= 'A' && st[i] <= 'F')
        // (int)'A'=65, (int)'B'=66 � �.�.
        // A ������砥 10, B - 11 � �.�.
        dec += v * (st[i]- 55);
     else // �������⨬� ᨬ���
       { err = 1;
         break; }
      v *= 16;     // ��� ᫥���饣� ࠧ�鸞
   }
   if ( !err ) {
       printf("���⭠����筮�� ��� %s ", st);
       printf("ᮮ⢥���� �����筮� %u\n", dec);
   }
   else {
       printf("C�ப� %s �� ���� ", st);
       printf("�᭠������ �᫮�\n");
   }

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

