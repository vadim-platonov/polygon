#include <iostream>
#include <vector>
#include <iterator>

#include <polygon/algorithms/insertion_sort.h>


int main(int argc, char *argv[])
{
    std::vector<int> data = {5, 6, 10, 1, 2, 11};

    std::copy(std::begin(data), std::end(data), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    polygon::insertionSort(data);
    std::copy(std::begin(data), std::end(data), std::ostream_iterator<int>(std::cout, " "));
    return 0;
}
