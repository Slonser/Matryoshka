#pragma once

typedef int цел;
typedef long long int длин;
typedef long double дроб;
typedef bool логич;
typedef char симв;
typedef std::string строка;

#define испстандарт using namespace std;struct MyStruct {MyStruct() {setlocale(LC_ALL, "rus");}};MyStruct a;
#define использовать using
#define пространство namespace
#define программа int main()
#define нач {
#define кон }
#define процедура void
#define если if
#define иначе else
#define авто auto
#define для for
#define циклпо(i,n) for(i=0;i<n;i++)
#define пока while
#define пост const
#define возвр return
#define структрура struct

#define ВЫВОД cout << 
#define ВВОД cin >>
#define ДОБАВИТЬИЗ <<
#define ДОБАВИТЬВ >>
#define ПКВС endl

#define МЕНЬШ <
#define БОЛЬШ >
#define МЕНЬШРАВН <=
#define БОЛЬШРАВН >=
#define РАВН ==
#define НЕРАВН !=
#define ЛОЖЬ false
#define ИСТИНА true
#define НЕ !
#define ИЛИ ||
#define И &&
#define ИСКЛИЛИ ^

#define поссылке &

#define обменять(a, b) swap(a, b)

#define типа(T) <T>