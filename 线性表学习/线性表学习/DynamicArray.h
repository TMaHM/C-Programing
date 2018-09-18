#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//动态增长内存 --> 将存放数据的内存放到堆上
//动态数组要插入的元素超过数组大小，需申请内存 --> 拷贝数据 --> 释放内存 --> 插入 (提前预留较大的空间)
//容量capacity表示当前的内存空间一共可以存放多少元素
//size记录当前数组中的元素个数

//定义动态数组的结构体
typedef struct DYNAMICARRAY {
	int* pAddr;		//存放数据的地址
	int size;		//当前有多少个元素
	int capacity;	//当前最大容量
}Dynamic_Array;

//对DYNAMICARRAY结构体操作

//初始化
Dynamic_Array* Init_Array();

//插入
void Push_Back_Array(Dynamic_Array* arr, int value);

//删除-->根据位置
void RemoveByPos_Array(Dynamic_Array* arr, int pos);

//删除-->根据值
void RemoveByValue_Array(Dynamic_Array* arr, int value);

//查找
int Find_Array(Dynamic_Array* arr, int value);

//打印
void Print_Array(Dynamic_Array* arr);

//释放动态数组的内存
void Release_Array(Dynamic_Array* arr);

//清空数组
void Clear_Array(Dynamic_Array* arr);

//获取动态数组容量
int Capacity_Array(Dynamic_Array* arr);

//获取动态数组当前元素个数
int Size_Array(Dynamic_Array* arr);

//根据位置获取某个元素
int At_Array(Dynamic_Array* arr, int pos);

#endif // !DYNAMIC_ARRAY_H

