#ifndef __LEVELS_H
#define __LEVELS_H

#define LEVELS 4
#define BRICKS_PER_LEVEL 572
#define BRICK_WIDTH brickwidth
#define BRICK_HEIGHT brickheight
#define BRICKS_PER_ROW 26

extern int32_t bricks_level[LEVELS][BRICKS_PER_LEVEL];
void initialise_levels();

#endif //__LEVELS_H
