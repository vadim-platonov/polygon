#include <polygon/algorithms/insertion_sort.h>

namespace polygon
{
    void insertionSort(std::vector<int>& data)
    {
        for (std::size_t j = 1; j <= data.size(); ++j)
        {
            const int key = data[j];
            int i = j - 1;
            while (i >= 0 && data[i] > key)
            {
                data[i+1] = data[i];
                --i;
            }
            data[i + 1] = key;
        }
    }
}