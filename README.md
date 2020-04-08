# Open Source Medical Calculation Library

## Introduction

Medlib is an open source library of medical calculations for C/C++
applications.  The code is designed to be simple, efficient, reviewed,
readable, and well-tested.

This library is intended to be used in medical devices, or devices
where safety is required.  It is designed to help jumpstart development
by providing a set of tested and reviewed code.  While many of functions
are simple, they are designed to make application code more readable. 

Medlib is envisioned to be used in open source
medical device applications, and is used in the RxJet Open Ventilator 
project.

## Project Goals

Our goals are simple:

- Build a standard library of standard, well-tested functions that can be utilized in
  medical/safety devices. Standardization on a common library between medical and safety device
  manufacturers may create a shared understanding and make code reviews/audits more efficient.
- Minimal dependancies.  No boost;  No frameworks;  No lambdas or fashionable template patterns.
  The only required external dependancies are the CppUTest unit test framework and CMake.  However,
  you can include these sources in your project and use with your own makefiles and remove those
  dependancies.
- Simplicity.  Only medical calculations, unit conversions, and scientific calculations and algorithms
  are included.
- Efficiency.  Where possible, the simple functions are inlined or templated.
- Portability.  While the code is targeted for embedded devices, it was designed to
  be portable. 
- Well documented.  This project uses Doxygen for code documentation.  Formulas are marked up in
  latex.
- Increase code readability and reduce complexity of applications
  using this library.

## Prerequisites
- CMake (Install instructions)[https://cmake.org/install]
- CppUTest
- Doxygen
