// SPDX-License-Identifier: GPL-2.0-only
/**
 *  @file: temperature.h
 *  @brief Temperature conversions
 *  @author Joe Turner <joe@rxjet.net>
 * 
 *  This module contains temperature conversion functions.
 *  
 *  Copyright (C) 2020  RxJet Inc.
 */
#ifndef _MEDLIB_TEMPERATURE_H_
#define _MEDLIB_TEMPERATURE_H_

/** 
 * \defgroup temperature Temperature Conversion
 * \brief Temperature conversion functions
 *
 * @{
 */

/**
 * \brief Convert Celcius temperature to Fahrenheit
 * 
 * This function converts a temperature value (in Celcius)
 * to Fahrenheit.
 * 
 * The equation is:
 * 
 * \f[
 *      F = (C * 1.8) + 32
 * \f]
 * 
 * \param temperature_C     Degrees in Celcius
 * 
 * \returns
 * This function returns the temperature in degrees Fahrenheit.
 */
inline
float temp_convert_C_to_F(float temperature_C)
{
    return (temperature_C * 1.8) + 32;
}

/**
 * \brief Convert Fahrenheit temperature to Celcius 
 * 
 * This function converts a temperature value (in Fahrenheit)
 * to Celcius.
 * 
 * The equation is:
 * 
 * \f[
 *      C = (F - 32) * 1.8
 * \f]
 * 
 * \param degrees_F     Degrees in Fahrenheit
 * 
 * \returns
 * This function returns the temperature in degrees Celcius.
 */
inline 
float temp_convert_F_to_C(float degrees_F)
{
    return (degrees_F - 32) * 1.8;
}

/**
 * \brief Convert Celcius temperature to Kelvin 
 * 
 * This function converts a temperature value (in Celcius)
 * to Kelvin.
 * 
 * The equation is:
 * 
 * \f[
 *      K = (C + 273);
 * \f]
 * 
 * \param temperature_C     temperature, in degrees in Celcius
 * 
 * \returns
 * This function returns the temperature in degrees Kelvin.
 */
inline 
float temp_convert_C_to_K(float temperature_C)
{
    return (temperature_C + 273);
}

/**
 * \brief Convert Kelvin temperature to Celcius 
 * 
 * This function converts a temperature value (in Kelvin)
 * to Celcius.
 * 
 * The equation is:
 * 
 * \f[
 *      C = K - 273
 * \f]
 * 
 * \param degrees_K     temperature in Kelvin
 * 
 * \returns
 * This function returns the temperature in degrees Celcius.
 */
inline 
float temp_convert_K_to_C(float degrees_K)
{
    return (degrees_K - 273);
}

/**@}*/

#endif // _MEDLIB_TEMPERATURE_H_
