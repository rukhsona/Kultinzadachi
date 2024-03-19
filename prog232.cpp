// ��䨪 �㭪樨
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

#define PATHTODRIVER "c:\\borlandc\\bgi\\"

void grafik()
{
    float x,dx;   // ��㬥�� � ��� ���饭�����
    float x1,x2;  // �������� ��������� ��㬥��
    float y;      // ���祭�� �㭪樨
    int mx,my;    // ����⠡ �� X � Y - ���-�� �祪
                  // �࠭�, ᮮ⢥�����饥 ������
                  // �� ��� ���न���
    int x0,y0;    // ��砫� �ᥩ ���न���
    int px,py;    // ���न���� �窨 ��䨪� �� �࠭�

    x0 = 320; y0 = 240;
    mx = 20; my = 20;
    // �� ���न���
    line(10,y0,630,y0);
    line(x0,10,x0,470);
    // ��䨪
    x1 = -15;
    x2 = 5;
    dx = 0.1;
    x = x1;
    while ( x < x2 )
    {
        y =  0.5*x*x + x*4 - 3;  // �㭪��
        px = x0 + x*mx;
        py = y0 - y*my;
        putpixel(px,py,WHITE);
        x += dx;
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
      return;
   }

   grafik();

   getch();
   closegraph(); // ��室 �� ����᪮�� ०���
}

