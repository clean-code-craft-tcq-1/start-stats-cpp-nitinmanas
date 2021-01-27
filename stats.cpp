#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>&vect ) {    
Stats info = {0,0,0};
info.min = vect[0];
for (int i=0; i<vect.size(); i++)
{
  info.avg = (vect[i]+info.avg);
  if(info.max<vect[i])
  {
    info.max = vect[i];
  }
  if (info.min>vect[i])
  {
    info.min=vect[i];
  }
 }
 info.avg/=vect.size();
 return info;    
}
