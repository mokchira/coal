#include "util.h"
#include <stdio.h>

void coal_PrintVec2(const Vec2 vec)
{
    printf("x: %f, y: %f\n", vec.x, vec.y);
}

void coal_PrintVec3(const Vec3 vec)
{
    printf("x: %f, y: %f z: %f\n", vec.e[0], vec.e[1], vec.e[2]);
}

void coal_PrintVec4(const Vec4 vec)
{
    printf(" %f, %f, %f, %f\n", vec.e[0], vec.e[1], vec.e[2], vec.e[3]);
}

void coal_PrintMat4(const Mat4 m)
{
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            printf("%f ", m.e[i][j]);
        }
        printf("\n");
    }
}
