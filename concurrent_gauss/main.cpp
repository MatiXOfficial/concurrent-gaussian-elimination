#include "gauss_matrix.h"

GaussMatrix GM;

int main(int argc, char *argv[])
{
    if (argc != 3)
        throw std::invalid_argument("Wrong number of arguments.");

    GM.readFromFile(argv[1]);

    GM.concurrentGauss();
    GM.backSubstitution();

    GM.writeToFile(argv[2]);
}