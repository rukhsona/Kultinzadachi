// ������ ᮯ�⨢����� �������᪮� 楯�
float sopr( float r1, float r2, int t)
{
    // r1,r2 - ����稭� ᮯ�⨢�����
    // t - ⨯ ᮥ�������:
    //     1 - ��᫥����⥫쭮�;
    //     2 - ��ࠫ���쭮�.
    // �᫨ ⨯ ᮥ������� 㪠��� ����୮,
    // � �㭪�� �����頥� -1
    float r;
    if ( t==1)  r =  r1 + r2;
    else if (t== 2)  r = r1*r2/(r1+r2);
            else r = -1;
    return(r);
}

