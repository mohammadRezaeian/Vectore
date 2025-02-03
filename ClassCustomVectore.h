
#ifndef CUSTOMVECTORE_CLASSCUSTOMVECTORE_H
#define CUSTOMVECTORE_CLASSCUSTOMVECTORE_H

template <typename TypeTemplate>

class ClassCustomVectore {

private:
    TypeTemplate *m_ValueVectore;
    int capacity;
public:
    ClassCustomVectore(const int size);
    void pushBack(const TypeTemplate &Value);

};


#endif //CUSTOMVECTORE_CLASSCUSTOMVECTORE_H