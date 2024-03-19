// ���� � ����⭮� � ᥪ㭤��� ��५����
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <dos.h>

#define PATHTODRIVER "c:\\borlandc\\bgi\\"

// �뢮��� ����� �������� ����� �� ⥪�饩 �窨
// �ᯮ������ ��� �뢮�� ����ࠦ���� ��५��
void vector(int a,   //  㣮� ����� ����஬ � ���� OX
            int l)  //  ����� �����
{
    #define G 0.0174532 // ����. 㣫� �� �ࠤ�ᮢ � ࠤ����
    int x0,y0; //  ���न���� ��砫� �����
    int x1,y1; // ���न���� ���� �����

    x0 = getx();
    y0 = gety();
    x1 = x0 + l*cos(a*G);
    y1 = y0 - l*sin(a*G);
    lineto(x1,y1);
}

void clock()
{
    int x0 = 80,   // ���न���� 業�� �ᮢ
        y0 = 80;
    int d = 50;    // ������� ��࡫��
    int s = 0;     // �६�, ���-�� ᥪ㭤
    int m = 0;     // �६�, ���-�� �����
    int as = 90;   // 㣮� ������� ᥪ㭤��� ��५��
    int am = 90;   // 㣮� ������� ����⭮� ��५��

    circle(x0,y0,d+5);
    setfillstyle(SOLID_FILL, 0);
    do {
       // �뢥�� ᥪ㭤��� ��५��
       moveto(x0,y0);
       setcolor(YELLOW);
       vector(as,d);

       // �뢥�� ������� ��५��
       moveto(x0,y0);
       setcolor(GREEN);
       vector(am,d-10);

       delay(1000); // ����প�

       // ����� ��५��
       setcolor(0);
       // ᥪ㭤���
       moveto(x0,y0);
       vector(as,d);

       // �������
       moveto(x0,y0);
       vector(am,d-10);

       s++;
       if (s > 60) {
         m++;
         s = 0;
         am -= 6; // 蠣 �������� ����⭮� ��५�� 6 �ࠤ�ᮢ
         if (am < 0)  am = 354;
       }
       as -= 6;
       if (as < 0)  as = 354;

     } while ( !kbhit() );
}

void main(void)
{
   int gdriver = DETECT; // �ࠩ���
   int gmode;            // ०��
   int errorcode;        // ��� �訡��

   initgraph(&gdriver, &gmode, PATHTODRIVER);
   errorcode = graphresult();

   if (errorcode == grOk)
   {
      clock();
      closegraph(); // ��室 �� ����᪮�� ०���
   }
   else
   {
      printf("�訡��: %d\n", errorcode);
      puts("��� �����襭�� �ணࠬ�� ������ <Enter>");
      getch();
   }
}

