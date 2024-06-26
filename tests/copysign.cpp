/*################################################################################
  ##
  ##   Copyright (C) 2016-2024 Keith O'Hara
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

#define TEST_PRINT_PRECISION_1 2
#define TEST_PRINT_PRECISION_2 2

#include "gcem_tests.hpp"

#include "monolithic_examples.h"


#if defined(BUILD_MONOLITHIC)
#define main     gcem_test_copysign_main
#endif

int main()
{
    print_begin("copysign");

    //

    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign,  1.0,  1.0);
    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign, -1.0,  1.0);
    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign,  1.0, -1.0);
    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign, -1.0, -1.0);

    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign,  1.0,  0.0);
    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign, -1.0,  0.0);
    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign,  1.0, -0.0);
    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign, -1.0, -0.0);

    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign,  0.0,  0.0);
    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign, -0.0,  0.0);
    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign,  0.0, -0.0);
    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign, -0.0, -0.0);
    
    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign, TEST_POSINF, TEST_POSINF);
    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign, TEST_NEGINF, TEST_POSINF);
    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign, TEST_POSINF, TEST_NEGINF);
    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign, TEST_NEGINF, TEST_NEGINF);

    GCEM_TEST_COMPARE_VALS(gcem::copysign,std::copysign, TEST_NAN, TEST_NAN);

    //

    print_final("copysign");

    return 0;
}
