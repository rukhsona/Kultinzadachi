// ��⨪���筠� ������
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

#define PATHTODRIVER "c:\\borlandc\\bgi\\"

// ��⨪���筠� ������
#include "math.h"
void star(int x0, int y0, int r)
{
    // x0,y0 - ���न���� 業�� ������
    // r - ࠤ��� ������

    int poly[20]; // ���न���� ���殢 ��祩
                  // � ������
    int a;  // 㣮� ����� ���� �� � ��אַ�,
            // ᮥ�����饩 業�� ������ �
            // ����� ��� ��� ��� �������
    int r1; // ࠤ��� ���㦭��� �ᯮ�������
            // �祪 ������

#define RTOR 2.5 // �⭮襭�� ࠤ��� ��祩
                 // � ࠤ���� ������

    int i;
    a = 18;    // ��ந� �� �ࠢ��� ���. ���
    r1 = r/RTOR;
    i=0;
    do {
        poly[i++] = x0+r*cos(a*2*M_PI/360);
        poly[i++] = y0-r*sin(a*2*M_PI/360);
        a = a+36;
        poly[i++] = x0+r1*cos(a*2*M_PI/360);
        poly[i++] = y0-r1*sin(a*2*M_PI/360);
        a = a+36;
        if (a > 360)  a = 18;
    } while(i < 20);
    setfillstyle(SOLID_FILL,RED);
    fillpoly(10,poly);
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
   }
   else {
      star(100, 100, 20);
      getch();
      closegraph(); // ��室 �� ����᪮�� ०���
   }
}

