// ���� �� �����⮢
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

#define PATHTODRIVER "c:\\borlandc\\bgi\\"
// 㧮� �� �����⮢
void uzor()
{
    int x;
    int y = 100; 
    int n;        // ������⢮ �����⮢ � ���
    int d = 30;   // ࠧ��� ������
    int l = 10;   // ����ﭨ� ����� �����⠬�
    for (int i = 0; i < 5; i++)
    {
        // ��� �鸞 ��।���� ���न���� X
        if (i % 2)
        {  // ����� ��
            n = 5;   // ���� �����⮢ � ���
            x = 100;
        }
        else { // ��� ��
            n = 4;
            x = 100 + d/2+l/2;
        }
        for (int j = 0; j < n; j++)
        {
            rectangle(x,y,x+d,y+d);
            x += d+l;
        }
        y += d/2+l/2;
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
      return;
   }

   uzor();

   getch();
   closegraph(); // ��室 �� ����᪮�� ०���
}

