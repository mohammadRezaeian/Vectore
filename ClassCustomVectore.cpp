#include "ClassCustomVectore.h"

template <typename TypeTemplate>
ClassCustomVectore<TypeTemplate>::ClassCustomVectore(const int size): capacity(size)
{
    m_ValueVectore = new TypeTemplate[size];
}

template <typename TypeTemplate>
void ClassCustomVectore<TypeTemplate>::pushBack(const TypeTemplate &Value)
{
    m_ValueVectore[]
}
