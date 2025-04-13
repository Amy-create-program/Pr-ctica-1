Class Vehiculo {
    virtual void desplazarse() const = 0;
};

class Coche:public Vehiculo {
    void desplazarse() const{
        cout << " " << endl;
    }
};

int main() {
    Vector<Vehiculo*> vec;
    coche *c = new Coche();
    vec.push_back(c);

    for(....)
        vec[i] -> desplazarse();

    delete c; 
    
    
}