#pragma once
#pragma setlocale("russian")
#include <clocale>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include "math.h"
#include <algorithm>
typedef int цел;
typedef bool логич;

#define массив vector
#define ПКВС endl
#define программа main()
#define процедура void
#define если if
#define иначе else
#define авто auto
#define для for
#define ЛОЖЬ false
#define ИСТИНА true
#define НЕ !
#define ИЛИ ||
#define И &&
#define ИСКЛИЛИ ^
#define возвр return
#define ВЫВОД cout << 
#define ВВОД cin >>
#define ЦИКЛПО(n) for(;i<n;i++)
#define ПАРОЛЬ(n) {int x=1488;cout<<x;}
#define нач {
#define кон }
#define зап ,
#define МЕНЬШ <
#define БОЛЬШ >
#define МЕНЬШРАВН <=
#define БОЛЬШРАВН >=
#define напоз(i) [i]
#define типа(T) <T>
#define добавьиз <<
#define добавьв >>
#define исполь using
#define жаргон namespace
#define блатной std;
#define размер size
#define очистить clear;
#define положитьвкон push_back
#define вставить insert
#define убратькон pop_back
#define ускоритьввод ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(nullptr)
#define копир copy
#define структрура struct
#define испстандарт using namespace std;struct MyStruct {MyStruct() {setlocale(LC_ALL, "rus");}};MyStruct a;
#define считатьмасс(arr) for(auto &x:arr) cin>>x;
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