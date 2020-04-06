// SPDX-License-Identifier: GPL-2.0-only
/**
 *  @file: temperature_test.cpp
 *  @brief Unit test
 *  @author Joe Turner <joe@rxjet.net>
 * 
 *  This module contains unit tests for temperature conversion functions.
 *  
 *  Copyright (C) 2020  RxJet Inc.
 */
#include "CppUTest/TestHarness.h"
#include "temperature.h"

TEST_GROUP(temperature)
{
  void setup()
  {
  }

  void teardown() 
  {
  }
};

TEST(temperature, C_to_F)
{
    CHECK_EQUAL(32.0, temp_convert_C_to_F(0));
}

TEST(temperature, F_to_C)
{
    CHECK_EQUAL(0.0,temp_convert_F_to_C(32.0));
}

TEST(temperature, C_to_K)
{
    CHECK_EQUAL(273.0,temp_convert_C_to_K(0));
}

TEST(temperature, K_to_C)
{
    CHECK_EQUAL(0.0, temp_convert_K_to_C(273));
}