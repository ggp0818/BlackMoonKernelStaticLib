#include "stdafx.h"

//λ���� - �ϲ�����
/*
    ���ø�ʽ�� �������͡� �ϲ����� �������� �����ϲ�������1�������� �����ϲ�������2�� - ϵͳ����֧�ֿ�->λ����
    Ӣ�����ƣ�MakeLong
    ����һ�������ĵ�16λ���õ���������ĵ�16λ�����ڶ��������ĵ�16λ���õ���������ĸ�16λ���Դ˺ϲ���һ�������������غϲ���Ľ����������Ϊ�м����
    ����<1>������Ϊ�������ϲ�������1��������Ϊ�������ͣ�int������
    ����<2>������Ϊ�������ϲ�������2��������Ϊ�������ͣ�int������
*/
LIBAPI(int, krnln_MakeLong)
{
	PMDATA_INF pArg = &ArgInf;
	int n = MAKELONG (pArg[0].m_int, pArg[1].m_int);
	return n;
}