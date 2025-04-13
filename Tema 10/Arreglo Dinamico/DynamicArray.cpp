#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

class DynamicArray{
        friend std::ostream& operator<<()
    public: 
        DynamicArray();
        DynamicArray(const int arr[], int size);
        DynamicArray(const DynamicArray &);

        ~DynamicArray
        size_t getSize() const;

        void push_back(int val); //para agregar un elemento al final
        void insert(int val, int pos);
        void remove(int pos);

    private:
        size_t size;
        int *ptr;
};

#endif