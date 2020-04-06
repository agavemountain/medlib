// SPDX-License-Identifier: GPL-2.0-only
/**
 *  @file: main.cpp
 *  @brief Unit test test runner
 *  @author Joe Turner <joe@rxjet.net>
 *  
 *  Copyright (C) 2020  RxJet Inc.
 */
#include "CppUTest/CommandLineTestRunner.h"

int main(int ac, char** av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}
