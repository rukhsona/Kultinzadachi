// �뢮��� �� �࠭ ᮤ�ন��� 䠩��
// ��� ���ண� 㪠���� ���짮��⥫��
#include "stdio.h"
#include "conio.h"
#include "string.h"

#define  MAXLEN 80    // ���ᨬ��쭠� ����� ��ப� � 䠩��
void main()
{
    char fname[40];   // ��� 䠩��
    FILE *�;         // ⥪�⮢� 䠩�

    char st[MAXLEN+2];// ��ப�, ���⠭��� �� 䠩��
    int n = 0;        // ���-�� ��ப, �뢥������ �� �࠭
    char key;         // ������, ������ ���짮��⥫��

    puts("��ᬮ�� ⥪�⮢��� 䠩��");
    puts("������ ������ ��� 䠩�� � ������ <Enter>");
    printf("->");
    scanf("%s",&fname);

    // ������ 䠩� � ०��� �⥭�� (r) ⥪�� (t)
    if ((f = fopen(fname, "rt")) == NULL)
    {
        printf("�訡�� �� ���饭�� � 䠩�� %s\n", fname);
        getch();
        return;
    }

    clrscr();
    while (!feof(f))
    {
        fgets(st, MAXLEN, f);
        printf("%s", st);
        if (++n > 21)
        {
          printf("\n��� �த������� ������ ");
          printf("���� �������...");
          key = getch();
          gotoxy(1,wherey()); // ����� � ��砫� ⥪�饩 ��ப�
          delline;            // 㤠���� ᮮ�饭�� "���
                              // �த������� ..."
            n = 0;
        }
    }
    fclose(f);     // ������� 䠩�

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

