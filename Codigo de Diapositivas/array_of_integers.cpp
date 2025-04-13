class IntegerArray{
public:
    int *data;
    int size;
    IntegerArray(int size){
        data == new int[size];
        this->size = size;
    }
    IntegerArray(IntegerArray &0) {
        data = new int[o.size];
        size = o.size;
        for (int i = 0; i < size; ++i)
            data[i] = o.data[i];
    }
    ~IntegerArray () {
        delete[] data;
    }
};

int main() {
    IntegerArray arr(2);
    arr.data[0] = 4; arr.data[1] = 2;
    if (true) {
        IntegerArray b = a;
    }
    cout << a.data[0] << endl;
}