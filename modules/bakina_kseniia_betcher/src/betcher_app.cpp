// Copyright 2022 Khristina Motyl
#include <exception>
#include <iostream>
#include <string>
#include <vector>
#include "include/backina_kseniia_betcher.h"
#include "include/betcher_app.h"

std::string App::info(const char* app_name) {
    return std::string { "Application of Betcher Odd-Even Merge\nUsage: " }
        + std::string { app_name }
    + std::string { " Input N N N\n        Where N are integers " }
    + std::string{ "divided with spaces" };
}

std::string App::operator()(int argc, const char* argv[]) {
    if (argc == 1) {
        return this->info(argv[0]);
    }
    std::vector<int> input_one;
    std::vector<int> input_two;
    std::vector<int> result;
    std::string output{};
    for (auto i = 1; i < argc; i++) {
        try {
            auto num = std::stoi(argv[i]);
            input_one.push_back(num);
            input_two.push_back(num);
            if (num <= 0) throw std::domain_error{ "below zero" };
        }
        catch (std::exception& e) {
            std::cout << "Wrong argument number is " << i << ":"
                << std::endl
                << e.what()
                << std::endl << std::endl;
            return this->info(argv[0]);
        }
    }
    EvenOddBetcher::partial_merger(0, input_one, input_two, &result);
    for (int i = 0; i < argc; i++) {
        output += std::to_string(result[i]);
        output += std::string{ " " };
    }
    return output;
}
