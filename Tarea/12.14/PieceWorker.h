#ifndef PIECEWORKER_H
#define PIECEWORKER_H

#include "Employee.h"

class PieceWorker : public Employee {
public:
    PieceWorker(const std::string& first, const std::string& last, const std::string& ssn, double wage, int pieces)
        : Employee(first, last, ssn), wagePerPiece(wage), piecesProduced(pieces) {}

    void setWage(double wage) { wagePerPiece = wage; }
    double getWage() const { return wagePerPiece; }

    void setPieces(int pieces) { piecesProduced = pieces; }
    int getPieces() const { return piecesProduced; }

    double earnings() const override {
        return wagePerPiece * piecesProduced;
    }

    std::string toString() const override {
        return "PieceWorker: " + Employee::toString() + "\nWage per piece: " + std::to_string(wagePerPiece)
            + "\nPieces produced: " + std::to_string(piecesProduced);
    }

private:
    double wagePerPiece;  // Salario por pieza
    int piecesProduced;   // Número de piezas producidas
};

#endif
