// ���ᨩ᪨� 䫠�
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

#define PATHTODRIVER "c:\\borlandc\\bgi\\"
void rusflag(int x, int y, int l, int h)
{
     // x, y - ���न���� ������ ���孥�� 㣫�
     // l, h - ����� � ���� 䫠��
     int w = h / 3;

     // ��㥬 䫠�
     setfillstyle(SOLID_FILL,WHITE);
     bar(x,y,x+l,y+w);
     setfillstyle(SOLID_FILL,BLUE);
     bar(x,y+w,x+l,y+2*w);
     setfillstyle(SOLID_FILL,RED);
     bar(x,y+2*w,x+l,y+3*w);
     outtextxy(x,y+h+5,"�����\0");
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

    rusflag(100,100,50,25);

   getch();
   closegraph(); // ��室 �� ����᪮�� ०���
}

