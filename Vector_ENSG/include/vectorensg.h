#ifndef VECTORENSG_H
#define VECTORENSG_H

#include "stdlib.h"

class VectorENSG
{
public:
    VectorENSG(size_t size);
    VectorENSG(const VectorENSG & array);
    ~VectorENSG();

    VectorENSG & operator=(const VectorENSG & array);
    void operator=(float value);
    float operator[](size_t i) const;
    float & operator[](size_t i);

    VectorENSG operator+(const VectorENSG & array) const;
    size_t getSize() const;

private:
    size_t m_size;
    float * m_vector;
};

#endif // VECTORENSG_H
