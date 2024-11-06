#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Clase base Package
class Package {
public:
    //Constructor
    Package(string senderName, string senderAddres, string recipientName, string recipientAddres, double weight, double costPerOunce)
        : senderName(senderDame), senderAddres(senderAddres), recipientName(recipientName), recipientAddres(recipientAddres), weight(weight), costPerOunce(costPerOunce) {}

    string getSenderName() const { return senderName; }
    string getSenderAddres() const { return senderAddress; }
    string getRecipientName() const {return recipientName; }
    string getRecipientAddress() const { return getrecipientAddress; }
    double getWeight() const { return weight; }
    double getCostPerOunce() const { return costPerOunce; }

    virtual double calculateCost() const {
        return weight * costPerOunce;
    }

    void printAdress() const {
        cout << "Sender: " << senderName << "\n" << senderAddress << "\n";
        cout << "Recipient: " << recipientName << "\n" << recipientAddress << "\n";
    }

    private:
        string senderName;
        string senderAddress;
        string recipientName;
        string recipientAddress;
        double weight;
        double costPerOunce;
};

class TwoDayPackage : public Package {
public:
    TwoDayPackage(string senderName, string senderAddress, string recipientName, string recipientAddress, double weight, double costPerOunce, double flatFee)
        : Package(senderName, senderAddress, recipientName, recipientAddress, weight, costPerOunce), flatFee(flatFee) {}
    //Redefinir el método para calcular el costo con un cargo adicional por servicio especial 
    double calculateCost() const override {
        return Package::calculateCost() + flatFee;
    }
private:
    double flatFee; //Cargo adicional por servicio de dos días 
};

class OvernightPackage : public Package {
public:
    OvernightPackage(string senderName, string senderAddress, string recipientName, string recipientAddress, double weight, double costPerOunce, double additionalFee)
        : Package(senderName, senderAddress, recipientName, recipientAddress, weight, costPerOunce), additionalFee(additionalFee) {}

    // Redefinir el método para calcular el costo con un cargo adicional por servicio nocturno
    double calculateCost() const override {
        return Package::calculateCost() + additionalFee;
    }

private:
    double additionalFee;  // Cargo adicional por servicio nocturno
};

int main() {
    // Crear un vector de punteros a Package
    vector<Package*> packages;

    // Añadir objetos TwoDayPackage y OvernightPackage al vector
    packages.push_back(new TwoDayPackage("John Doe", "123 Main St", "Jane Smith", "456 Oak St", 10, 0.5, 5));
    packages.push_back(new OvernightPackage("Alice Brown", "789 Maple St", "Bob Green", "321 Pine St", 5, 0.75, 10));

    // Variable para total de costos de envío
    double totalCost = 0;

    // Procesar todos los paquetes en el vector
    for (Package* pkg : packages) {
        // Imprimir direcciones
        pkg->printAddress();
        
        // Calcular y mostrar el costo de envío
        double cost = pkg->calculateCost();
        cout << "Shipping Cost: $" << cost << "\n\n";

        // Sumar al costo total
        totalCost += cost;
    }

    // Mostrar el costo total de envío
    cout << "Total Shipping Cost: $" << totalCost << endl;

    // Liberar memoria
    for (Package* pkg : packages) {
        delete pkg;
    }

    return 0;
}