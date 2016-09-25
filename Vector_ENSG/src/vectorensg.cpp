#include "vectorensg.h"
#include <string.h>

VectorENSG::VectorENSG(size_t size) : m_size(size)
{
    // Allocates the vector
    m_vector = new float[m_size];
}

VectorENSG::~VectorENSG()
{
    // Deallocates the vector
    delete [] m_vector;
}

VectorENSG::VectorENSG(const VectorENSG & v)
{
    operator=(v);
}

VectorENSG & VectorENSG::operator=(const VectorENSG & v)
{
    // Deals with self assignment
    if (this != &v)
    {
        // Allocates the vector and copies content
        size_t newSize = v.getSize();
        float * newVector = new float[newSize];
        memcpy(newVector, v.m_vector, newSize * sizeof(float));

        // Deallocates the old vector
        delete [] m_vector;

        // Copies members
        m_size = newSize;
        m_vector = newVector;
    }

    return *this;
}

void VectorENSG::operator=(float value)
{
    size_t currentSize = getSize();

    for (size_t i = 0 ; i < currentSize ; i++)
        operator[](i) = value;
}

VectorENSG VectorENSG::operator+(const VectorENSG & v) const
{
    size_t outputSize = getSize();
    VectorENSG output(outputSize);

    for (size_t i = 0 ; i < outputSize ; i++)
        output[i] = operator[](i) + v[i];

    return output;
}

size_t VectorENSG::getSize() const
{
    return m_size;
}

float VectorENSG::operator[](size_t i) const
{
    return m_vector[i];
}

float & VectorENSG::operator[](size_t i)
{
    return m_vector[i];
}
