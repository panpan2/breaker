#include "includes.h"

int32_t level1[MAX_BRICKS_PER_LEVEL] = {0x0};
int32_t level2[MAX_BRICKS_PER_LEVEL] = {0x0};
int32_t level3[MAX_BRICKS_PER_LEVEL] = {0x0};
int32_t level4[MAX_BRICKS_PER_LEVEL] = {0x0};

int32_t bricks_level[LEVELS][MAX_BRICKS_PER_LEVEL];
void initialise_levels() {
    memcpy(bricks_level[0], level1, MAX_BRICKS_PER_LEVEL);
    memcpy(bricks_level[1], level2, MAX_BRICKS_PER_LEVEL);
    memcpy(bricks_level[2], level3, MAX_BRICKS_PER_LEVEL);
    memcpy(bricks_level[3], level4, MAX_BRICKS_PER_LEVEL);
}
