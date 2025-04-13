#ifndef __SOL_PERUANO__
#define __SOL_PERUANO__
#include <iostream>

class SolPeruano{
    private:
        int soles;
        int centimos;
    public:
        SolPeruano(int s = 0, int c=0 ) : soles{s}, centimos{c}{}
        int getSol() const{
            return soles;
        }
        int getCentimos() const {
            return centimos;
        }
        void setSoles(int s){
            soles = s;
        }
        void setCentimos(int c){
            centimos = c;
        }
        void print() const {
            std::cout << "S/." << soles << "." << centimos << std::endl; 
        }

        SolPeruano operator+(const SolPeruano &o) const {
            int s = soles + o.soles;
            int c = centimos + o.centimos; 
            if(centimos >= 100) {
                s += c / 100;
                c = c & 100;
            }
            return SolPeruano(s, c);
        }
/**
 * Para hacer sobrecarga se usa el operator y el simbolo que quieres usar como operator++
 */
        bool operator<(const SolPeruano& o) const {
            if (soles < o.soles){
                return true;
            }
            if (soles == o.soles && centimos < o.centimos){
                return true;
            }
            else{
                return false;
            }
        }
        bool operator>(const SolPeruano& o) const {
            if (soles > o.soles){
                return true;
            }
            if (soles == o.soles && centimos > o.centimos) {
                return true;
            }
            else {
                return false;
            }
        }
        bool operator==(const SolPeruano& o) const {
            return soles == o.soles && centimos == o.centimos;
        }        
};
#endif