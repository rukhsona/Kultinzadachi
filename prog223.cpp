// ����� ��ࠡ��� (� �ᯮ�짮������ ��⮤� ������� �窨)
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define dx  10  // 蠣 �⪨ �� �
#define dy  10  // 蠣 �⪨ �� Y

void ship(int x, int y) // x,y - ���न���� ������� �窨
{
    //  �����
    moveto(x,y);
    lineto(x,y-2*dy);
    lineto(x+10*dx,y-2*dy);
    lineto(x+11*dx,y-3*dy);
    lineto(x+17*dx,y-3*dy);
    lineto(x+14*dx,y);
    lineto(x,y);
    // �����ன��
    moveto(x+3*dx,y-2*dy);
    lineto(x+4*dx,y-3*dy);
    lineto(x+4*dx,y-4*dy);
    lineto(x+13*dx,y-4*dy);
    lineto(x+13*dx,y-3*dy);
    line(x+5*dx,y-3*dy,x+9*dx,y-3*dy);
    // ����⠭᪨� ���⨪
    rectangle(x+8*dx,y-4*dy,x+11*dx,y-5*dy);
    // ��㡠
    rectangle(x+7*dx,y-4*dy,x+8*dx,y-7*dy);
    // ��������
    circle(x+12*dx,y-2*dy,dx/2);
    circle(x+14*dx,y-2*dy,dx/2);
    // ����
    line(x+10*dx,y-5*dy,x+10*dx,y-10*dy);
    // �᭠�⪠
    moveto(x+17*dx,y-3*dy);
    lineto(x+10*dx,y-10*dy);
    lineto(x,y-2*dy);
}

#define PATHTODRIVER "c:\\borlandc\\bgi\\"

void main(void)
{
    int gdriver = DETECT; // �ࠩ���
    int gmode;            // ०��
    int errorcode;        // ��� �訡��

    initgraph(&gdriver, &gmode, PATHTODRIVER);
    errorcode = graphresult();

    if (errorcode != grOk) // �訡�� ���樠����樨 ���. ०���
    {
      printf("�訡��: %d\n", errorcode);
      puts("��� �����襭�� �ணࠬ�� ������ <Enter>");
      getch();
      exit(1);
    }

    ship(50,150);
    getch();
    closegraph(); // ��室 �� ����᪮�� ०���
}

