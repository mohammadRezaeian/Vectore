
#ifndef CUSTOMVECTORE_CLASSCUSTOMVECTORE_H
#define CUSTOMVECTORE_CLASSCUSTOMVECTORE_H
#include <iostream>

template <typename TypeTemplate>

class ClassCustomVectore {

private:
    TypeTemplate *m_ValueVectore;
    int m_capacity;
    int m_counter=0;
public:
    ClassCustomVectore(const int size);
    void pushBack(const TypeTemplate _Value);
    void printValue(int _index);
    ~ClassCustomVectore();
};


template <typename TypeTemplate>
ClassCustomVectore<TypeTemplate>::ClassCustomVectore(const int size): m_capacity(size)
{
    m_ValueVectore = new TypeTemplate[size];
}

template <typename TypeTemplate>
void ClassCustomVectore<TypeTemplate>::pushBack(const TypeTemplate _Value)
{
    if(m_counter  > m_capacity)
    {

    }
    else
    {
        m_ValueVectore[m_counter++] = _Value;
    }
}

template <typename TypeTemplate>
void ClassCustomVectore<TypeTemplate>::printValue(int _index)
{
    std::cout << m_ValueVectore[_index];
}


template <typename TypeTemplate>
ClassCustomVectore<TypeTemplate>::~ClassCustomVectore() {
    delete[] m_ValueVectore;
}

#endif //CUSTOMVECTORE_CLASSCUSTOMVECTORE_H