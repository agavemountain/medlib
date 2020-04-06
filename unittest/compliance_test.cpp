// SPDX-License-Identifier: GPL-2.0-only
/**
 *  @file: compliance_test.cpp
 *  @brief Unit test
 *  @author Joe Turner <joe@rxjet.net>
 * 
 *  Copyright (C) 2020  RxJet Inc.
 */
#include <math.h>
#include "CppUTest/TestHarness.h"
#include "compliance.h"

TEST_GROUP(compliance)
{
  void setup()
  {
  }

  void teardown() 
  {
  }
};

//! An adult patient who is receiving mechanical ventilation has a tidal volume of 450 mL, 
//! peak pressure of 30 cmH2O, plateau pressure of 22 cmH2O, and a PEEP of 5. 
//! What is the static compliance?
//!
//! The text book's answer is 26.5 mL/cmH2O (rounded up)
//!
//! - Lung, Johnny. Respiratory Therapy Formulas and Calculations: Reference Guide and 
//! Practice Problems (Respiratory Therapist, Respiratory Care, Respiratory Therapy, 
//! Study Guide, RRT, CRT, Equations) . Kindle Edition. 
TEST(compliance, stat_compliance)
{
    double val = static_compliance(450, 22, 5);
    val = round(val * 10)/10;

    CHECK_EQUAL(26.5, val);
}

//! An adult patient who is receiving mechanical ventilation has a tidal volume of 450 mL, 
//! peak pressure of 30 cmH2O, plateau pressure of 22 cmH2O, and a PEEP of 5. What is the 
//! static compliance?
//!
//! The text book's answer is 18 mL/cmH2O
//!
//! - Lung, Johnny. Respiratory Therapy Formulas and Calculations: Reference Guide and 
//! Practice Problems (Respiratory Therapist, Respiratory Care, Respiratory Therapy, 
//! Study Guide, RRT, CRT, Equations) . Kindle Edition. 
TEST(compliance, dyn_compliance)
{
    double val = dynamic_compliance(450, 30, 5);
    CHECK_EQUAL(18.0, val);
}
