// ��䨪 �㭪樨
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PATHTODRIVER "c:\\borlandc\\bgi\\"

// �㭪樨, ��䨪 ������ ���� ����ந��
float f1(float x)
{
    return(2 * sin(x) * exp(x/5));
}

void grafik()
{
    float x1=0,   // �࠭��� ��������� ��㬥�� �㭪樨
          x2=25;
    float y1,y2;  // �࠭��� ��������� ���祭�� �㭪樨
    float x;      // ��㬥�� �㭪樨
    float y;      // ���祭�� �㭪樨 � �窥 x
    float dx=0.01;   // ���饭�� ��㬥��
    int l=50,     // ���� ������ 㣮� ������ ��䨪�
        b=400;
    int w=300,    // �ਭ� � ���� ������ ��䨪�
        h=200;
    float mx,my;  // ����⠡ �� ��� X � Y
    int x0,y0;    // �窠 - ��砫� ���न���
    char st[25];  // ����ࠦ���� �᫠

    // ������ ���ᨬ��쭮� � �������쭮� ���祭��
    // �㭪権 �� ��१�� [x1,x2]
    y1 = f1(x1); // ������
    y2 = f1(x1); // ���ᨬ�
    x = x1 + dx;
    do {
        y = f1(x);
        if (y < y1)  y1 = y;
        if (y > y2)  y2 = y;
        x += dx;
    } while (x <= x2);

    // ���᫨� ����⠡ �� ���
    my = h/fabs(y2-y1);
    mx = w/fabs(x2-x1);
    // ��
    x0 = l;
    y0 = b-abs(y1*my);
    line(l,b,l,b-h);
    line(x0,y0,x0+w,y0);
    // ���ᨬ��쭮� � �������쭮� ���祭�� �㭪樨
    sprintf(st,"%3.2f",y2);
    outtextxy(l+5,b-h,st);
    sprintf(st,"%3.2f",y1);
    outtextxy(l+5,b,st);
    // ����஥��� ��䨪�
    x = x1;
    do {
        y = f1(x);
        putpixel(x0+x*mx,y0-y*my,15);
        x += dx;
    } while (x <= x2);
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
        grafik();
        getchar();
        closegraph();
   }
   else {
      printf("�訡��: %d\n", errorcode);
      puts("��� �����襭�� �ணࠬ�� ������ <Enter>");
      getch();
   }
}

