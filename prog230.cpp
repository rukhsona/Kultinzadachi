// ��嬠⭠� ��᪠
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

#define PATHTODRIVER "c:\\borlandc\\bgi\\"
// �嬠⭠� ��᪠
void doska()
{
    int x0 = 100,   // ���न���� ������ ���孥�� 㣫� ��᪨
        y0 = 100;
    int x,y;        // ���न���� ������ ���孥�� 㣫� ���⪨
    int w = 25;     // ࠧ��� ���⪨
    int i,j;        // ����� ��ப� � �������

    x = x0;
    y = y0;
    for (i = 0; i < 8; i++)   // ��ᥬ� ��ப
    {
        for ( j = 0; j < 8; j++) // ��ᥬ� ���⮪ � ��ப�
       {
           // �᫨ �㬬� ����� ��ப� � �����
           // �������, �� ����祭�� ������ ��室����
           // ���⪠, �⭠�, � ���⪠ - ���筥���,
           //    ���� - �����
           if ((i+j) % 2)
              setfillstyle(SOLID_FILL,BROWN);
           else setfillstyle(SOLID_FILL,YELLOW);
           bar(x,y,x+w,y+w);
           x += w;
       }
       x = x0;
       y += w;
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

   doska();

   getch();
   closegraph(); // ��室 �� ����᪮�� ०���
}

