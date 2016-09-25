#ifndef VECTORENSG_H
#define VECTORENSG_H

#include "stdlib.h"

class VectorENSG
{
public:
    VectorENSG(size_t size);
    VectorENSG(const VectorENSG & v);
    ~VectorENSG();

    VectorENSG & operator=(const VectorENSG & v);
    void operator=(float value);
    float operator[](size_t i) const;
    float & operator[](size_t i);

    VectorENSG operator+(const VectorENSG & v) const;
    size_t getSize() const;

private:
    size_t m_size;
    float * m_vector;
};

#endif // VECTORENSG_H
