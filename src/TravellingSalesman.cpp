#include "../include/TravellingSalesman.h"
#include <vector>

int TravellingSalesman::solveTravellingSalesman() {
    int graph[][V] = {
            {0,  10, 15, 20},
            {10, 0,  35, 25},
            {15, 35, 0,  30},
            {20, 25, 30, 0}
    };
    for (int i = 0; i < V; i++) {
        if (i != source) {
            vertices.push_back(i);
        }
    }

    // Do while loop
    do {
        int current_cost{0};
        int temp_source = source;
        for (int i = 0; i < vertices.size(); i++) {
            current_cost += graph[temp_source][vertices[i]];
            temp_source = vertices[i];
        }
        current_cost += graph[temp_source][source];

        travel_cost = std::min(travel_cost, current_cost);
    } while (
            std::next_permutation(vertices.begin(), vertices.end())
            );
    std::cout << " Travel Cost : " << travel_cost << std::endl;
    return travel_cost;
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