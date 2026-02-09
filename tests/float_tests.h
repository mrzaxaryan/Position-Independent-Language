#pragma once

#include "test_framework.h"

// ============================================================================
// FLOAT TESTS
// ============================================================================

class FloatTests
{
public:
    static BOOL RunAll()
    {
        BOOL allPassed = TRUE;
        LOG_INFO("Running Float Tests...");

        RunScriptTest(allPassed, L"tests/scripts/float/float_literals.pil"_embed, L"Float literals"_embed, CFG_STDLIB);
        RunScriptTest(allPassed, L"tests/scripts/float/mixed_arithmetic.pil"_embed, L"Mixed arithmetic"_embed, CFG_STDLIB);
        RunScriptTest(allPassed, L"tests/scripts/float/float_comparisons.pil"_embed, L"Float comparisons"_embed, CFG_STDLIB);
        RunScriptTest(allPassed, L"tests/scripts/float/division.pil"_embed, L"Division"_embed, CFG_STDLIB);
        RunScriptTest(allPassed, L"tests/scripts/float/modulo_integers.pil"_embed, L"Integer modulo"_embed, CFG_STDLIB);
        RunScriptTest(allPassed, L"tests/scripts/float/str_function.pil"_embed, L"str() with floats"_embed, CFG_STDLIB);
        RunScriptTest(allPassed, L"tests/scripts/float/num_function.pil"_embed, L"num() with floats"_embed, CFG_STDLIB);
        RunScriptTest(allPassed, L"tests/scripts/float/floor_ceil_int.pil"_embed, L"floor/ceil/int functions"_embed, CFG_STDLIB);
        RunScriptTest(allPassed, L"tests/scripts/float/min_max_abs.pil"_embed, L"min/max/abs with floats"_embed, CFG_STDLIB);
        RunScriptTest(allPassed, L"tests/scripts/float/negation.pil"_embed, L"Float negation"_embed, CFG_STDLIB);

        if (allPassed)
            LOG_INFO("All Float Tests passed!");
        else
            LOG_ERROR("Some Float Tests failed!");

        return allPassed;
    }
};
