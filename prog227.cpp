// ������ ��⨪���筮� ������
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define PATHTODRIVER "c:\\borlandc\\bgi\\"

// ������ ��⨪���筮� ������
#include "math.h"
void starline(int x0, int y0, int r)
{
    // x0,y0 - ���न���� 業�� ������
    // r - ࠤ��� ������

    int x,y;// ���न���� ���� ���
            // ��� �������
    int a;  // 㣮� ����� ���� �� � ��אַ�,
            // ᮥ�����饩 業�� ������ �
            // ����� ��� ��� ��� �������
    int r1; // ࠤ��� ���㦭��� �ᯮ�������
            // �祪 ������

#define RTOR 2.5 // �⭮襭�� ࠤ��� ��祩
                 // � ࠤ���� ������

    a = 18;    // ��ந� �� �ࠢ��� ���. ���
    r1 = r/RTOR;
    x = x0+r*cos(a*2*M_PI/360);
    y = y0-r*sin(a*2*M_PI/360);
    moveto(x,y);
    for (int i = 0; i < 5; i++)
    {
        a = a+36;
        x = x0+r1*cos(a*2*M_PI/360);
        y = y0-r1*sin(a*2*M_PI/360);
        lineto(x,y); // �� ��� � �������
        a = a+36;
        if (a > 360)  a = 18;
        x = x0+r*cos(a*2*M_PI/360);
        y = y0-r*sin(a*2*M_PI/360);
        lineto(x,y); // �� ������� � ����
    }
}

void main(void)
{
   int gdriver = DETECT; // �ࠩ���
   int gmode;            // ०��
   int errorcode;        // ��� �訡��

   initgraph(&gdriver, &gmode, PATHTODRIVER);
   errorcode = graphresult();

   if (errorcode != grOk)  // �訡�� ���樠����樨 ���. ०���
   {
      printf("�訡��: %d\n", errorcode);
      puts("��� �����襭�� �ணࠬ�� ������ <Enter>");
      getch();
      exit(1);
   }

   starline(100, 100, 50);
   
   getch();
   closegraph(); // ��室 �� ����᪮�� ०���
}

