#include <string>

using namespace std;

class Empleado {
    public:
        Empleado(string n, string a, double s) : nombre(n) apellido (a) {
            if (s > 0 ) 
                salario = s; 
        }
        string getNombre() const {
            return nombre;
        }

        void setNombre(string n) {
            nombre = n; 
        }

    private: 
        string nombre;
        string apellido;
        double salario{0};
}