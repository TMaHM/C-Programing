#define _CRT_SECURE_NO_WARNINGS

#include"DynamicArray.h"

void test01() {
	//��ʼ����̬����
	Dynamic_Array* myArray = Init_Array();
	//��ӡ����
	printf("����������%d\n", Capacity_Array(myArray));
	printf("�����С��%d\n", Size_Array(myArray));

	//����Ԫ��
	for (int i = 0; i < 30; i++) {
		Push_Back_Array(myArray, i);
	}
	printf("����������%d\n", Capacity_Array(myArray));
	printf("�����С��%d\n", Size_Array(myArray));


	//��ӡ
	Print_Array(myArray);

	//����
	int pos = Find_Array(myArray, 5);
	printf("%dλ�ҵ�%d\n", pos, At_Array(myArray,pos));

	//ɾ��
	RemoveByPos_Array(myArray, 0);
	RemoveByValue_Array(myArray, 27);
	Print_Array(myArray);
	printf("����������%d\n", Capacity_Array(myArray));
	printf("�����С��%d\n", Size_Array(myArray));

	//����
	Release_Array(myArray);
}

int main(void) {
	test01();

	system("pause");
	return 0;
}