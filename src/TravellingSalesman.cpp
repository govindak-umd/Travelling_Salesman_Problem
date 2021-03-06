#include "../include/TravellingSalesman.h"
#include <vector>

int TravellingSalesman::solveTravellingSalesman() {
    return 0;
}

int TravellingSalesman::getTravelCost() {
    return travel_cost;
}

std::vector<int> TravellingSalesman::getVertices() {
    return vertices;
}

void TravellingSalesman::setVertices(std::vector<int> ver) {
    vertices = ver;
}

void TravellingSalesman::setTravelCost(int min_cost) {
    travel_cost = min_cost;
}