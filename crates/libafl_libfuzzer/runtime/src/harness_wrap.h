#pragma once

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

volatile const char *__HACK_DO_NOT_MERGE = "ERROR: libFuzzer";

int libafl_libfuzzer_test_one_input(int (*harness)(const uint8_t *, size_t),
                                    const uint8_t *data, size_t len);

#ifdef __cplusplus
}
#endif
