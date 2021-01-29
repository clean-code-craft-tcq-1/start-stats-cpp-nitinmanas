#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>&vect ) {    
Stats info = {0,0,0};
    info.min = vect[0];
    int i=0;
    for (int i=0; i<vect.size(); i++)
    {
       if(0 == (isnan(vect[i])))
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
       else
       {
           info.avg=0;
           info.max=0;
           info.min=0;
           info.notNumber=1;
           break;
       }
    }
    info.avg/=vect.size();
    return info;



