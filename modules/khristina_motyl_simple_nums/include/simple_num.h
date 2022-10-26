// Copyright 2022 Khristina Motyl
#ifndef MODULES_KHRISTINA_MOTYL_SIMPLE_NUMS_INCLUDE_SIMPLE_NUM_H_
#define MODULES_KHRISTINA_MOTYL_SIMPLE_NUMS_INCLUDE_SIMPLE_NUM_H_
#include <stdexcept>
#include <vector>

class simple_numbers {
 public:
    static std::vector<int> _Calculate(int start, int end);
    static void _Print(int start, int end);
};

#endif  // MODULES_KHRISTINA_MOTYL_SIMPLE_NUMS_INCLUDE_SIMPLE_NUM_H_
