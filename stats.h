#include <vector>
#include <math.h>

typedef struct
{
    float average;
    float max;
    float min;
    int notNumber;
} Stats;
namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&vect);
}
