// ��� "������ �᫮"
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "time.h"

#define  N 3   // �஢��� ᫮����� - ������⢮
               // ��� � �᫥
#define DEBUG  // ०�� �⫠���

void main(){
   char igrok[N];  // ��������� ��ப�
   char comp[N];   // ��������� ��������

   int a[N];  // a[i] == 1, �᫨ i-� ���
              // �������� ᮢ���� � ����� �� ��� ��ப�

   int ugad;      // 㣠���� �ᥫ
   int mesto;     // �� ��� �� ᢮�� �����

   int i,j;       // �������
   time_t t;

   printf("\n��� ������ �᫮");
   printf("\n�������� ���㬠� ��姭�筮� \n");
   printf("�᫮. �� ������ ��� 㣠����.\n");
   printf("��᫥ ����� �᫠ �� 㧭���, ");
   printf("ᮮ�饭�, ᪮�쪮 ��� 㣠����, � \n");
   printf("᪮�쪮 �� ��� ��室���� �� ᢮�� ");
   printf("�����.");
   printf("��᫥ ����� �᫠ �������� <Enter>\n");

   srand((unsigned)time(&t) ); // ���樠������ ���

   // �������� "����뢠��" �᫮
   for (i = 0; i < N; i++)
       comp[i] = rand() % 10 + 48;
       // 48 - ��� ᨬ���� '0'
   
#ifdef DEBUG
   printf("�������� ���㬠�: ");
   for (i = 0; i < N; i++)
       printf("%c", comp[i]);
   printf("\n");
#endif

   do {
      printf("\n��� ��ਠ��-> ");
      scanf("%s", &igrok);

      for (i = 0; i < N; i++)
            a[i] = 0;

      // �஢�ਬ, ᪮�쪮 ��� 㣠����
      ugad = 0;   
      
      // ������ ���� ��ப�
      //�ࠢ��� � ��ࠬ� �������� 
      for (i = 0; i < N; i++)    
         for (j = 0; j < N; j++)
         {
            if ((igrok[i] == comp[j]) && !a[j])
            {
              ugad++;
              a[j] = 1; // ����⨬ �ࠢ������
                        // ��� ���� �������� �
                        // �� �� �஢�७�묨
                        // ��ࠬ� ��ப�
              break;
            }
         }
      // �஢�ਬ, ᪮�쪮 �� ᢮�� �����
      mesto = 0;
      for (i = 0; i < N; i++)
          if (igrok[i] == comp[i])  mesto++;
      printf("�������: %i. �� ᢮�� �����: %i",
               ugad, mesto);
   } 
   while  ((ugad < N) || (mesto < N));
   
   printf("\n����ࠢ���! �� 㣠���� �᫮,\n");
   printf("���㬠���� �������஬.");

   printf("\n��� �����襭�� ������ <Enter>");
   getch();
}


