#include "io.h"
#include "simulation.h"
#include <iostream>
using namespace std;

int main() {
    cout << "=== Railway Simulation ===" << endl;

    if (!loadLevelFile()) {
        cout << "Error: Failed to load level file!" << endl;
        return 1;
    }

    initializeSimulation();

    while (!isSimulationComplete()) {
        simulateOneTick();
    }

    cout << "Simulation complete!" << endl;
    return 0;
}
