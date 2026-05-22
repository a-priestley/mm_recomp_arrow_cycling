#ifndef __RECOMPUTILS_H__
#define __RECOMPUTILS_H__

#include "modding.h"

RECOMP_IMPORT("*", void* recomp_alloc(unsigned long size));
RECOMP_IMPORT("*", void recomp_free(void* memory));
RECOMP_IMPORT("*", int recomp_printf(const char* fmt, ...));
typedef enum {
    // The dependency was found and the version requirement was met.
    DEPENDENCY_STATUS_FOUND = 0,
    // The ID given is not a dependency of the mod in question.
    DEPENDENCY_STATUS_INVALID_DEPENDENCY = 1,
    // The dependency was not found.
    DEPENDENCY_STATUS_NOT_FOUND = 2,
    // The dependency was found, but the version requirement was not met.
    DEPENDENCY_STATUS_WRONG_VERSION = 3
} DependencyStatus;
RECOMP_IMPORT("*", DependencyStatus recomp_is_dependency_met(const char* dependency_id));

#endif
