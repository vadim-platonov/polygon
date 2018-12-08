class vector
{
public:
    vector();
    ~vector();
    void push_back(int value);
    int pop_back();
    bool empty();
    unsigned size();
    void resize(unsigned size);
    unsigned capacity();
    void reserve(unsigned capacity);
    int& at(unsigned index);
private:
    int* m_memory;
    unsigned m_capacity;
    unsigned m_size;
};