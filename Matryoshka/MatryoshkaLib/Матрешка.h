#pragma once
#pragma setlocale("russian")
#include "стандбиблиотеки.h"
#include "ключслова.h"
#include "массивы.h"
typedef int цел;
typedef bool логич;

#define ускоритьввод ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(nullptr)

template <typename T>
void напечатать(const T& data, int count, char sep)
{
	for (auto it = begin(data); it != data.begin() + count; ++it) {
		std::cout << *it << sep;
	}
}
template <typename T>
void напечатать(const T& data, int count)
{
	напечатать(data, count, ' ');
}
template <typename T>
void напечатать(const T& array)
{
	напечатать(array, array.size());
}
void старт() {
	setlocale(LC_ALL, "rus");
}