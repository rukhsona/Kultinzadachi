// �㭪�� getint
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"

//  �㭪�� getint �।�����祭� ��� ����� 楫��� ������⥫쭮��
//  �᫠, ����饣� �� ����� ��� ���� ���. �� �६� �����,
//  ��� ।���஢����, ����� �ᯮ�짮������ <Backspace>.
//  �� ����⨨ <Enter> �㭪�� �����頥� ��������� �᫮.

#define K_BACK  8   // ��� ������ <Backspace>
#define K_ENTER 13  // ��� ������ <Enter>
#define HB      4   // �����⨬�� ������⢮ ���
int getint()
{
  char ch;      // ⥪�騩 ᨬ���
  char buf[HB];  // �������� ����
  int n = 0;    // ���-�� ��������� ���

  buf[0] = '\0';
  while ((ch = getch()) != K_ENTER)
        if (ch >= '0' && ch <= '9'&& n < HB)
        {    putch(ch);
            buf[n++] = ch;
        }
        else if (ch == K_BACK && n)
             {
                printf("\b \b");
                n--;
             }
  if (n)
  {
    buf[n] = '\0';
    return(atoi(buf));
  }
  else return(-1);
}

void main() {
  
  int a; // ��������� �᫮

  puts("\n���������� ࠡ��� �㭪樨 getint\n");

  puts("�㭪�� getint ���ᯥ稢��� ���� ");
  puts("楫��� ������⥫쭮�� �᫠.");
  puts("�� �६� ����� ��� ।���஢���� �����");
  puts("�ᯮ�짮������ ������ <Backspace>");
  puts("�� ����⨨ <Enter> �㭪�� �����頥�");
  puts("��������� �᫮ ��� -1, �᫨ �᫮ �� �������.");

  puts("������ �᫮ � ������ <Enter>");
  printf("->");
  if (a = getint())
        printf("\n�� ����� �᫮ %d", a);
  else puts("��᫮ �� �������.");

  puts("\n��� �����襭�� ������ <Enter>");
  getch();
}

