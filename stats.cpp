#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>&vect ) {    
Stats info = {0,0,0,0};
    info.min = vect[0];
    for (int i=0; i<vect.size(); i++)
    {
       if(0 == (isnan(vect[i])))
       {
        info.average = (vect[i]+info.average);
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
           info.average=0;
           info.max=0;
           info.min=0;
           info.notNumber=1;
           break;
       }
    }
    info.average/=vect.size();
    return info;
}



