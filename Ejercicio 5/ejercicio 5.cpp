#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {
    vector <int> vector;

    vector.push_back(10);
    vector.push_back(20);
    vector.push_back(30);

    cout << "Elementos del vector: " << endl;
    for(int elemento : vector) {
        cout << elemento << endl;
    }
    cout << endl;

    std::map<int, string> mapa;

    mapa[1] = "uno";
    mapa[2] = "dos";
    mapa[3] = "tres";

    cout << "Elementos del mapa: " << endl;
    for(const auto& par : mapa) {
        cout << par.first << " -> " << par.second << endl;
    }

    set<int> Set;

    Set.insert(10);
    Set.insert(20);
    Set.insert(30);

    cout << "Elementos del set: " << endl;
    for(int elemento : Set) {
        cout << elemento << " ";
    }
    cout << endl;
    return 0;





}