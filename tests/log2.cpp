/*################################################################################
  ##
  ##   Copyright (C) 2016-2023 Keith O'Hara
  ##
  ##   This file is part of the GCE-Math C++ library.
  ##
  ##   Licensed under the Apache License, Version 2.0 (the "License");
  ##   you may not use this file except in compliance with the License.
  ##   You may obtain a copy of the License at
  ##
  ##       http://www.apache.org/licenses/LICENSE-2.0
  ##
  ##   Unless required by applicable law or agreed to in writing, software
  ##   distributed under the License is distributed on an "AS IS" BASIS,
  ##   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ##   See the License for the specific language governing permissions and
  ##   limitations under the License.
  ##
  ################################################################################*/

#define TEST_PRINT_PRECISION_1 6
#define TEST_PRINT_PRECISION_2 18

#include "gcem_tests.hpp"

#include "monolithic_examples.h"


#if defined(BUILD_MONOLITHIC)
#define main     gcem_test_log2_main
#endif

int main()
{
    print_begin("log2");

    //

    GCEM_TEST_COMPARE_VALS(gcem::log2, std::log2,  0.5L);
    GCEM_TEST_COMPARE_VALS(gcem::log2, std::log2,  0.00199900000000000208L);
    GCEM_TEST_COMPARE_VALS(gcem::log2, std::log2,  1.5L);
    GCEM_TEST_COMPARE_VALS(gcem::log2, std::log2,  41.5L);
    GCEM_TEST_COMPARE_VALS(gcem::log2, std::log2,  0.0L);
    GCEM_TEST_COMPARE_VALS(gcem::log2, std::log2, -1.0L);
    GCEM_TEST_COMPARE_VALS(gcem::log2, std::log2,  1e-500L);
    GCEM_TEST_COMPARE_VALS(gcem::log2, std::log2,  std::numeric_limits<long double>::min());
    
    GCEM_TEST_COMPARE_VALS(gcem::log2, std::log2, -std::numeric_limits<long double>::infinity());
    GCEM_TEST_COMPARE_VALS(gcem::log2, std::log2,  std::numeric_limits<long double>::infinity());
    GCEM_TEST_COMPARE_VALS(gcem::log2, std::log2,  std::numeric_limits<long double>::quiet_NaN());

    //

    print_final("log2");

    return 0;
}
