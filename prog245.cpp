// ������ ������ �� ���ᨢ� � 䠩�
#include "stdio.h"
#include "conio.h"
#include "string.h"

void main()
{
#define NR 3
#define NC 6
    
    // ���ᨢ ������
    float a[NR][NC] =
     {
        15.0,16.5,18.0,19.5,21.0,24.0,
        16.5,18.0,19.5,21.0,22.5,24.0,
        18.0,19.5,21.0,22.5,24.0,27.0
     };

     FILE *f; // 䠩�
     
     int r,c; // ����� ��ப� � �⮫��

     // �������� �����
     printf("\n�����:\n");
     for ( r = 0; r < NR; r++)
     {
        for (c = 0; c < NC; c++)
        {
            printf("%5.2f   ", a[r][c]);
        }
        printf("\n");
     }

     // �।����������, �� ��ப� ⥪�⮢��� 䠩��
     // ���� ᮤ�ঠ�� ���祭�� ��ப ����⮢ ���ᨢ�
    
      // ������ ��� ����� (w) ⥪�⮢� 䠩� (t)
      // �᫨ 䠩� � 㪠����� ������ 㦥 �������,
      // �� �㤥� ������� ����
      if ((f = fopen("a.dat", "wt")) == NULL)
      {
          printf("�訡�� ᮧ����� 䠩��\n");
          printf("��� �����襭�� ������ <Enter>");
          getch();
          return;
      }

      for ( r = 0; r < NR; r++)
      {
         for (c = 0; c < NC; c++)
         {
            fprintf(f, "%5.2f ", a[r][c]);
         }
         if ( r != NR-1)
            fprintf(f, "\n");
      }
      fclose(f);
      printf("����� ����ᠭ� � 䠩�\n");

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}


