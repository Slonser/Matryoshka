#pragma once
#pragma setlocale("russian")
#include "���������������.h"
#include "���������.h"
#include "�������.h"
typedef int ���;
typedef bool �����;

#define ������������ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(nullptr)

template <typename T>
void ����������(const T& data, int count, char sep)
{
	for (auto it = begin(data); it != data.begin() + count; ++it) {
		std::cout << *it << sep;
	}
}
template <typename T>
void ����������(const T& data, int count)
{
	����������(data, count, ' ');
}
template <typename T>
void ����������(const T& array)
{
	����������(array, array.size());
}
void �����() {
	setlocale(LC_ALL, "rus");
}