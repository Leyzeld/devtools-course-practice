// Copyright 2022 Khristina Motyl
#include <iostream>

#include "include/betcher_app.h"

int main(int argc, const char* argv[]) {
    App app;
    auto output = app(argc, argv);
    std::cout << output << std::endl;
    return 0;
}
