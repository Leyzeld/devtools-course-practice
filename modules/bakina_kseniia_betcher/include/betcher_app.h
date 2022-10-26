// Copyright 2022 Khristina Motyl

#ifndef MODULES_BAKINA_KSENIIA_BETCHER_INCLUDE_BETCHER_APP_H_
#define MODULES_BAKINA_KSENIIA_BETCHER_INCLUDE_BETCHER_APP_H_

#include <vector>
#include <string>
#include "include/backina_kseniia_betcher.h"

class App {
 private:
    std::string info(const char* app_name);
 public:
    std::string operator()(int argc, const char** argv);
};

#endif  // MODULES_BAKINA_KSENIIA_BETCHER_INCLUDE_BETCHER_APP_H_
