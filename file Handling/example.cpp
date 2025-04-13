#include <fstream>
using namespace std;

int main() {
    ifstream source("source-file.txt");
    ofstream destination("dest-file.txt")
    int x;
    source >> x; 
    source.close();
    destination << x;
    return 0;
}