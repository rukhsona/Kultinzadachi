// �뢮��� �� �࠭ ᮤ�ন��� 䠩��
#include "stdio.h"
#include "conio.h"

#define FNAME "numbers.txt\0" // ��� 䠩��

void main()
{
     char fname[20] = FNAME;
     FILE *f;     // ⥪�⮢� 䠩�
     char st[80];  // ��ப� �� 䠩��

     printf("\n����ন��� 䠩�� %s\n", fname);
     puts("---------------------------------");

     // ������ 䠩� � ०��� �⥭�� (r) ⥪�� (t)
     if ((f = fopen(fname, "rt")) == NULL)
     {
        printf("�訡�� ������ 䠩�� ��� �⥭��");
        getch();
        return;
     }

     while (!feof(�))
     {
        fscanf(f,"%s", &st);
        printf("%s\n", st);
     }
     fclose(f);     // ������� 䠩�
     
     puts("---------------------------------");
     puts("\n��� �����襭�� ������ <Enter>");
     getch();
}

