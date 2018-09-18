#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//��̬�����ڴ� --> ��������ݵ��ڴ�ŵ�����
//��̬����Ҫ�����Ԫ�س��������С���������ڴ� --> �������� --> �ͷ��ڴ� --> ���� (��ǰԤ���ϴ�Ŀռ�)
//����capacity��ʾ��ǰ���ڴ�ռ�һ�����Դ�Ŷ���Ԫ��
//size��¼��ǰ�����е�Ԫ�ظ���

//���嶯̬����Ľṹ��
typedef struct DYNAMICARRAY {
	int* pAddr;		//������ݵĵ�ַ
	int size;		//��ǰ�ж��ٸ�Ԫ��
	int capacity;	//��ǰ�������
}Dynamic_Array;

//��DYNAMICARRAY�ṹ�����

//��ʼ��
Dynamic_Array* Init_Array();

//����
void Push_Back_Array(Dynamic_Array* arr, int value);

//ɾ��-->����λ��
void RemoveByPos_Array(Dynamic_Array* arr, int pos);

//ɾ��-->����ֵ
void RemoveByValue_Array(Dynamic_Array* arr, int value);

//����
int Find_Array(Dynamic_Array* arr, int value);

//��ӡ
void Print_Array(Dynamic_Array* arr);

//�ͷŶ�̬������ڴ�
void Release_Array(Dynamic_Array* arr);

//�������
void Clear_Array(Dynamic_Array* arr);

//��ȡ��̬��������
int Capacity_Array(Dynamic_Array* arr);

//��ȡ��̬���鵱ǰԪ�ظ���
int Size_Array(Dynamic_Array* arr);

//����λ�û�ȡĳ��Ԫ��
int At_Array(Dynamic_Array* arr, int pos);

#endif // !DYNAMIC_ARRAY_H

