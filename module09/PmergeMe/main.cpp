#include "PmergeMe.hpp"

int main(int ac, char **av) {
    if (ac > 2)
        if (mergeInsertSort(ac, av))
            return 1;
    return 0;
}