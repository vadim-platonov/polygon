#include <exception>
#include <cstdlib>
#include <algorithm>

#include "vector.h"

vector::vector()
    : m_memory(nullptr)
    , m_capacity(0)
    , m_size(0)
{
}

vector::~vector()
{
    std::free(m_memory);
}

void vector::push_back(int value)
{
    if (m_size == m_capacity)
    {
        reserve(m_capacity + 10);
    }
    m_memory[m_size] = value;
    ++m_size;
}

int vector::pop_back()
{
    if (m_size == 0)
    {
        throw std::exception();
    }
    --m_size;
    return m_memory[m_size];
}

bool vector::empty()
{
    return m_size == 0;
}

unsigned vector::size()
{
    return m_size;
}

void vector::resize(unsigned size)
{
    if (size > m_capacity)
    {
        reserve(size + 10);
    }
    m_size = size;
}

unsigned vector::capacity()
{
    return m_capacity;
}

void vector::reserve(unsigned capacity)
{
    if (m_size > capacity)
    {
        throw std::exception();
    }
    if (capacity <= m_capacity)
    {
        return;
    }
    int* memory = reinterpret_cast<int*>(std::malloc(capacity * sizeof(int)));
    std::copy(memory, memory + m_size, m_memory);
    std::free(reinterpret_cast<void*>(m_memory));
    m_memory = memory;
    m_capacity = capacity;
}

int &vector::at(unsigned index)
{
    if (index >= m_size)
    {
        throw std::exception();
    }
    return m_memory[index];
}
