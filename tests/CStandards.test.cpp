/*
* Khaos
* C/C++ library for writing cross-platform codes.
*
* SPDX-FileCopyrightText: 2020-2024 flagarde
*
* SPDX-License-Identifier: MIT
*/

/* Copyright 2022 flagarde */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "Khaos/details/languages/CStandards.h"

// NOLINTBEGIN
#include "doctest/doctest.h"
// NOLINTEND

TEST_CASE("Test the CStandards values")
{
  CHECK_EQ(KHAOS_STANDARD_C90_PRIVATE(), 1L);
  CHECK_EQ(KHAOS_STANDARD_C95_PRIVATE(), 199409L);
  CHECK_EQ(KHAOS_STANDARD_C99_PRIVATE(), 199901L);
  CHECK_EQ(KHAOS_STANDARD_C11_PRIVATE(), 201112L);
  CHECK_EQ(KHAOS_STANDARD_C17_PRIVATE(), 201710L);
}
