#include "/home/solly/code/c-build/build.h"

struct build_target build_targets[] = {
    {.cl = GCC, .files = "source.c", .flags = "-o one-exe"},
    {.cl = GCC, .files = "source.c", .flags = "-o two-exe"},
    {.cl = GCC, .files = "source.c", .flags = "-o three-exe"},
};

#include SRC
