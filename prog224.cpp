// ���� �� ���㦭��⥩
//  ��砩���� ࠤ��� � 梥�
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "time.h"
#include "dos.h"

#define PATHTODRIVER "c:\\borlandc\\bgi\\"

// 㧮� �� ���㦭��⥩
void cuzor(int n)
{
    #define DELAY  // ����প� ����� �뢮��� ���㦭��⥩
    int x,y,r; // ���न���� 業�� � ࠤ��� ���㦭���
    time_t t;

    srand((unsigned)time(&t)); // ���樠������ ���
    for (int i = 0; i < n; i++)
    {
        x = rand() % 640;
        y = rand() % 480;
        r = rand() % 240;
        setcolor(rand() %16);
        circle(x,y,r);
        #ifdef DELAY
        delay(5);
        #endif
    }
}

void main(void)
{
   int gdriver = DETECT; // �ࠩ���
   int gmode;            // ०��
   int errorcode;        // ��� �訡��

   initgraph(&gdriver, &gmode, PATHTODRIVER);
   errorcode = graphresult();

   if (errorcode != grOk)  // �訡�� ���樠����樨 ����᪮�� ०���
   {
      printf("�訡��: %d\n", errorcode);
      puts("��� �����襭�� �ணࠬ�� ������ <Enter>");
      getch();
      exit(1);
   }

   cuzor(200); // 㧮� �� ���㦭��⥩

   getch();
   closegraph(); // ��室 �� ����᪮�� ०���
}

