// ���᫥��� ���祭�� ��䬥��᪮�� ��ࠦ����
#include <stdio.h>
#include <conio.h>
#include "stdlib.h"
void main()
{
   char st[40];  // ��ப�
   char buf[10]; // ����ࠦ���� ��।���� �᫠
   char op;      // ������
   int rez;      // ���祭�� ��ࠦ����
   int n;        // ��।��� �᫮

   int i,j;

   printf("\n������ ��䬥��᪮� ��ࠦ����,\n");
   printf("���ਬ��, 45+5-3-125+2 � ������ <Enter>");
   printf("(�஡��� � ��㣨� ����� �������⨬�)\n");
   printf("->");
   scanf("%s", &st);

   rez = 0; // ���祭�� ��ࠦ����
   op = ' ';
   i = j = 0;
   while( st[i] )
   {
      // �뤥���� �᫮
      j = 0;
      while (st[i] >= '0' && st[i] <= '9')
         buf[j++] = st[i++];
      buf[j] = '\0';
      n = atoi(buf); // �८�ࠧ����� ��ப� � 楫��

      // �믮����� ����⢨�
      switch ( op )
      {
        case '+': rez += n; break;
        case '-': rez -= n; break;
        case ' ': rez = n;  break; // ��ࢮ� �᫮ �ਬ��
      }

      // �뤥���� ���� ����樨
      op = st[i++];
   }
   printf("���祭�� ���������� ��ࠦ����: %d", rez);
   printf("\n��� �����襭�� ������ <Enter>");
   getch();

