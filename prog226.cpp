// ���� �� �����
// ��砩���� 梥�
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "time.h"

#define PATHTODRIVER "c:\\borlandc\\bgi\\"

// 㧮� �� �����
void luzor(int n)
{
    int x,y;   // ���न���� ���� �����
    int c;     // 梥� �����
    time_t t;

    srand((unsigned)time(&t)); // ���樠������ ���
    for (int i = 0; i < n; i++)
    {

        x = rand() % 640;
        y = rand() % 480;
        c = rand() % 16;
        setcolor(c);
        lineto(x,y);
     }
}

void main(void)
{
   int gdriver = DETECT; // �ࠩ���
   int gmode;            // ०��
   int errorcode;        // ��� �訡��

   initgraph(&gdriver, &gmode, PATHTODRIVER);
   errorcode = graphresult();

   if (errorcode != grOk)  // �訡�� ���樠����樨 ���.०���
   {
      printf("�訡��: %d\n", errorcode);
      puts("��� �����襭�� �ணࠬ�� ������ <Enter>");
      getch();
      exit(1);
   }

   luzor(200); // 㧮� �� ���㦭��⥩

   getch();
   closegraph(); // ��室 �� ����᪮�� ०���
}

