// ���஢���� ���न���� ��
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

#define PATHTODRIVER "c:\\borlandc\\bgi\\"

void grid()
{
    int x0,y0; // ���न���� ��砫� ���न����� �ᥩ
    int dx,dy; // 蠣 ���न��⭮� �⪨ (� ���ᥫ��)
    int h,w;   // ���� � �ਭ� ������ �뢮��
               // ���न��⭮� �⪨
    int x,y;

    float lx,ly;    // ��⪨ ����� �⪨ �� X  Y
    float dlx,dly;  // 蠣 ��⮪ ����� �⪨ �� X � Y
    char st[8];     // ����ࠦ���� ��⪨ ����� �⪨

    x0 = 50; y0 = 400; // �� ��稭����� � �窥 (50,400)
    dx = 40; dy = 40;  // 蠣 ���न��⭮� �⪨ 40 ���ᥫ��
    dlx = 0.5;        // 蠣 ��⮪ �� X
                      // ��⪠�� ����: 0.5, 1.0, 1.5 ...
    dly = 1;          // 蠣 ��⮪ �� Y
                      // ��⪠�� ����: 1, 2, 3 ...
    h = 300;
    w = 400;

    lx = 0;           // ��砫� ���न��� ����砥��� ��⪠�� 0
    ly = 0;

    line(x0,y0,x0,y0-h);  // ��� X
    line(x0,y0,x0+w,y0);  // ��� Y

    // ���窨, �⪠ � ���஢�� �� �� X
    x = x0;
    do {
        // ���窠
        setlinestyle(SOLID_LINE, 0, 1);
        line(x,y0-3,x,y0+3);
        // ���஢��
        sprintf(st,"%2.1f",lx);
        outtextxy(x-8,y0+5,st);
        lx += dlx;
        // ����� �⪨
        setlinestyle(DOTTED_LINE, 0, 1);
        line(x,y0-3,x,y0-h);
        x += dx;
    } while (x < x0+w);

    // ���窨, �⪠ � ���஢�� �� �� Y
    y = y0;
    do {
        // ���窠
        setlinestyle(SOLID_LINE, 0, 1);
        line(x0-3,y,x0+3,y);
        // ���஢��
        sprintf(st,"%2.1f",ly);
        outtextxy(x0-40,y,st);
        ly += dly;
        // ����� �⪨
        setlinestyle(DOTTED_LINE, 0, 1);
        line(x0+3,y,x0+w,y);
        setlinestyle(SOLID_LINE, 0, 1);
        y -= dy;
    } while (y > y0-h);
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

   grid();

   getch();
   closegraph(); // ��室 �� ����᪮�� ०���
}

