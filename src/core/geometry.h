#ifndef PBRT_CORE_GEOMETRY_H
#define PBRT_CORE_GEOMETRY_H

namespace pbrt
{
    template <typename T>
    class Vector2
    {
    public:
        Vector2() { x = y = 0; }
        Vector2(T xx, T yy) : x(xx), y(yy) {}
        T x, y;
    };

    typedef Vector2<int> Vector2i;
}

#endif