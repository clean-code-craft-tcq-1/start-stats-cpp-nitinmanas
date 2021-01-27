#include <vector>

typedef struct
{
    float average;
    float max;
    float min;
} Stats;
namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&vect);
}
