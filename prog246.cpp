#include "stdio.h"
#include "conio.h"
#include "string.h"

void main()
{
#define NR 3
#define NC 6
    
    float a[NR][NC]; // ���ᨢ NR�NC - NR ��ப �� NC ����⮢

    FILE *f; // 䠩�

    // �।����������, �� ��ப� ⥪�⮢��� 䠩��
    // ᮤ�ঠ� ���祭�� ��ப ����⮢ ���ᨢ�
    
     // ������ ��� �⥭�� (r) ⥪�⮢� 䠩� (t)
     if ((f = fopen("c:\\borlandc\\cpp\\a.dat", "rt")) == NULL)
     {
        printf("��� 䠩�� a.dat");
        printf("\n��� �����襭�� ������ <Enter>");
        getch();
        return;
     }

     int r,c; // ����� ��ப� � �⮫��

     for ( r = 0; r < NR; r++)
     {
        for (c = 0; c < NC; c++)
        {
            fscanf(f, "%f", &a[r][c]);
        }
     }
     fclose(f);

     printf("\n�����, ����㦥��� � ���ᨢ �� 䠩��:\n");
     // �������� ���⠭�� �����
     for ( r = 0; r < NR; r++)
     {
        for (c = 0; c < NC; c++)
        {
            printf("%7.2f  ", a[r][c]);
        }
        printf("\n");
     }

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

