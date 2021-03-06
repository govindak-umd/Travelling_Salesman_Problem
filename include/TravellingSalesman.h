#ifndef TRAVELLING_SALESMAN_PROBLEM_TRAVELLINGSALESMAN_H
#define TRAVELLING_SALESMAN_PROBLEM_TRAVELLINGSALESMAN_H

#include <bits/stdc++.h>
#include <vector>

#define V 4

/**
 * Travelling salesman class0
 */

class TravellingSalesman {

private:

    int travel_cost = INT_MAX;
    std::vector<int> vertices;
    int source{0};

public:

    /**
     * Solves the travelling salesman problem
     * @return The travel cost
     */
    int solveTravellingSalesman();

    /**
     * To get the Hamiltonian Path
     */
    void getHamiltonianPath();

    /**
     * Getter function to get the travel cost
     * @return the travel cost for the salesman
     */
    int getTravelCost();

    /**
     * Getter function to get the vertices of the graph
     * @return vertices of the graph
     */
    std::vector<int> getVertices();


};


#endif //TRAVELLING_SALESMAN_PROBLEM_TRAVELLINGSALESMAN_H
