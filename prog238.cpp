// ��㣮��� ����ࠬ��
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PATHTODRIVER "c:\\borlandc\\bgi\\"

    #define N 4 // ������⢮ ��⥣�਩

void krdiagr(char* *name, float* dol)
{
    int a1,a2;     // 㣮� ��砫� � ���� ᥪ��
    int color[4] = {BLUE, YELLOW, GREEN, RED};
    int x,y;       // ���न���� �뢮�� �������
    char st[25];   // ����ࠦ���� �᫠
    int i;

    // ��ந� ����ࠬ��
    a1 = 0;            // �� �� ��
    x = 350; y = 100;  // ���� ���孨� 㣮� ������ �������
    for (i = 0; i < N; i++)
    {
      // ᥪ��
      a2 = a1 + 3.6 * dol[i];  // 1% - 3.6 �ࠤ��
      if (i == N-1) a2 = 360; // ��᫥����, �� ����, ᥪ��
      setfillstyle(SOLID_FILL, color[i]);
      sector(200,200,a1,a2,100,100);
      // pieslice(200,200,a1,a2,100);
      a1 = a2;  // ᫥���騩 ᥪ�� - �� ���� ⥪�饣�
      // �������
      bar(x,y,x+30,y+10);
      rectangle(x,y,x+30,y+10);
      sprintf(st, "%s - %2.1f%\0", name[i], dol[i]);
      outtextxy(x+50,y,st);
      y += 20;
    }
}

void main(void)
{
    char *name[N] = {"�����\0","��ୠ��\0",
                     "����⮢���\0","��祥\0"};
    float kol[N];  // ������⢮ ��� ��⥣�ਨ
    float dol[N];  // ���� ��⥣�ਨ � ��饬 ������⢥
    float sum = 0; // ��饥 ���-�� �� �ᥬ ��⥣���
    int i;

    int gdriver = DETECT; // �ࠩ���
    int gmode;            // ०��
    int errorcode;        // ��� �訡��

    // ���� ��室��� ������
    puts("������ ������⢮ �� ������ ��⥣�ਨ");
    for (i = 0; i < N; i++)
    {
      printf("%s -> ", name[i]);
      scanf("%f", &kol[i]);
      sum += kol[i];
    }

    // ���᫨� ���� ������ ��⥣�ਨ � ��饩 �㬬�
    for (i = 0; i < N; i++)
      dol[i] = kol[i]/sum*100;

    // ���樠������ ����᪮�� ०���
    initgraph(&gdriver, &gmode, PATHTODRIVER);
    errorcode = graphresult();

    if (errorcode == grOk)
    {
        krdiagr(name, dol);// ��ந� ����ࠬ��
        getch();
        closegraph(); // ��室 �� ����᪮�� ०���
   }
   else {
        printf("�訡��: %d\n", errorcode);
        puts("��� �����襭�� ������ <Enter>");
        getch();
   }
}

