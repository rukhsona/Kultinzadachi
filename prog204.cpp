// �㭪�� Barrel2Ton ������뢠��
// 業� �� ���५� � 業� �� ⮭��

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"

// ������뢠�� 業� �� ���५�
// � 業� �� ⮭��
float Barrel2Ton(float b)
{
    // b - 業� ���५� 
    float t; // 業� ⮭��

    t = b* (1000/136.4);
    
    //return (t);

    // ����� �ਢ������� ��� ������権
    // ����� �������: 
     return ( b* (1000/136.4) );
    //
}


void main()
{
    float barrel; // 業� ���५�
    float ton;    // 業� ⮭��

    printf("\n���� ���५�-> ");
    scanf("%f", &barrel);

    ton = Barrel2Ton(barrel);

    printf("\���� ⮭��:%6.2f", ton);
    
    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}


