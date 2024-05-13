enum {
    GCC,
    CLANG,
};

struct build_target {
    int cl;
    const char *files;
    const char *flags;
};

#define SRC "/home/solly/code/c-build/main.c"
