// SPDX-License-Identifier: GPL-2.0-only
/**
 *  @file: compliance.h
 *  @brief Compliance calculations
 *  @author Joe Turner <joe@rxjet.net>
 * 
 *  Copyright (C) 2020  RxJet Inc.
 */
#ifndef _MEDLIB_COMPLIANCE_H_
#define _MEDLIB_COMPLIANCE_H_
#include <assert.h>

/**
 * \brief Calculate Dynamic Compliance (Cdyn)
 * 
 * This function will calculate dynamic compliance.
 * 
 * Dynamic compliance is defined as the change in lung volume per unit change in 
 * pressure in the presence of flow. Its components are:
 * 
 * - Chest wall compliance
 * - Lung tissue compliance
 * - Airway resistance (which makes it frequency-dependent)
 * 
 * The equation is:
 * \f[
 *   C_{dyn} = \frac{V_T}{(PIP - PEEP)}\\
 * \f]
 * 
 * \param tidal_vol_ml  Tidal Volume (Vt) in mL
 * \param PIP           Peek Pressure in cmH2O
 * \param PEEP          PEEP, in cmH2O
 * 
 * \returns
 * This function returns the calculated dynamic compliance (Cdyn)
 */
inline double dynamic_compliance(double tidal_vol_ml, double PIP, double PEEP)
{
    assert(PIP != PEEP);
    return (tidal_vol_ml / (PIP - PEEP));
}

/**
 * \brief Calculate Static Compliance (Cstat)
 * 
 * This function will calculate static compliance.
 * 
 * Static compliance is defined as the change in lung volume per unit 
 * change in pressure in the absence of flow. 
 * 
 * The equation is:
 * \f[
 *   C_{stat} = \frac{V_T}{(P_{plat} - PEEP)}\\
 * \f]
 * 
 * \param tidal_vol_ml  Tidal Volume (VT) in mL
 * \param Pplat         Plateau Pressure in cmH2O
 * \param PEEP          PEEP, in cmH2O
 * 
 * \returns
 * This function returns the calculated static compliance (Cst)
 */
inline double static_compliance(double tidal_vol_ml, double Pplat, double PEEP)
{
    assert(Pplat != PEEP);
    return (tidal_vol_ml / (Pplat - PEEP));
}

#endif
