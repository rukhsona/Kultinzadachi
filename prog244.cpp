// ������ �।��� ��䬥��᪮� �ᥫ,
// ��室����� � 䠩���
#include "stdio.h"
#include "conio.h"

#define FNAME "numbers.txt\0" // ��� 䠩��

void main()
{
     char fname[20] = FNAME;
     FILE *f;     // ⥪�⮢� 䠩�

     int a;       // �᫮
     int n = 0;   // ������⢮ �ᥫ
     int sum = 0; // �㬬� �ᥫ
     float sr;    // �।��� ��䬥��᪮�

     puts("\n���᫥��� �।���� ��䬥��᪮��");
     printf("�ᥫ, ��室����� � 䠩�� %s", fname);

     // ������ 䠩� � ०��� �⥭�� (r) ⥪�� (t)
     if ((f = fopen(fname, "rt")) == NULL)
     {
        printf("�訡�� ������ 䠩�� ��� �⥭��");
        getch();
        return;
     }

     while (!feof(f))
     {
        fscanf(f,"%i", &a);
        sum += a;
        n++;
     }
     fclose(f);     // ������� 䠩�

     sr = (float) sum / n;
     printf("������� �ᥫ: %i\n", n);
     printf("�㬬� �ᥫ: %i\n", sum);
     printf("�।��� ��䬥��᪮�: %3.2f", sr);

     puts("\n��� �����襭�� ������ <Enter>");
     getch();
}

