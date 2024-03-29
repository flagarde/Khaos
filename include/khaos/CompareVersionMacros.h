#ifndef KHAOS_COMPAREVERSIONMACROS_H_
#define KHAOS_COMPAREVERSIONMACROS_H_

#include "khaos/KhaosVersion.h"
#include "khaos/VersionMacros.h"

/** \file CompareVersionMacros.h
 *  \copyright 2022 flagarde
 *  \brief Define macros to compare versions.
 *  \note Use these macros only if you need preprocessor version checking.
 *  \note For example :
 *  \code{.cpp}
 *  #if CHECK_VERSIONS(version1,==,version2)
 *  ...
 *  #else
 *  ...
 *  #endif
 *  \endcode
 */

/** \hideinitializer
 *  \brief Check the \b version with \b major, \b minor, \b patch using the operator \b op
 *  \param[in] version version to compare.
 *  \param[in] op operator =, !=, >=, <= >, < .
 *  \param[in] major major part.
 *  \param[in] minor minor part.
 *  \param[in] patch patch part.
 *
 *  \note Value can be directly used in both preprocessor and compiler expressions for comparison to other similarly defined values.
 */
#define CHECK_VERSION(version, op, major, minor, patch) ((KHAOS_VERSION_##version##_PRIVATE())op(SET_VERSION(major, minor, patch)))

/** \hideinitializer
 *  \brief Check the \b versiona with \b versionb using the operator \b op
 *  \param[in] versiona version to compare.
 *  \param[in] op operator =, !=, >=, <= >, < .
 *  \param[in] versionb version to compare.
 *
 *  \note Value can be directly used in both preprocessor and compiler expressions for comparison to other similarly defined values.
 */

#define CHECK_VERSIONS(a, op, b) ((KHAOS_VERSION_##a##_PRIVATE())op(KHAOS_VERSION_##b##_PRIVATE()))

#endif /* KHAOS_COMPAREVERSIONMACROS_H_ */
