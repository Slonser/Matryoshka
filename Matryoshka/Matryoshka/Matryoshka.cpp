﻿#include "Матрешка.h"
испстандарт;
массив типа(массив типа(цел)) сеть;
массив типа(цел) дист;
массив типа(логич) посещ;

процедура ПВГ(цел верш, цел глуб = 0)
нач
    посещ[верш] = ИСТИНА;
    дист[верш] = глуб;
    для(авто след : сеть[верш])
        если(НЕ посещ[след])
        ПВГ(след, глуб + 1);
кон

программа
    нач
    
    кон
