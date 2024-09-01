    #include "parallelogramm.h"
    
    bool Parallelogramm::check() 
    {
        return Quadrangle::check()&&(angleA==angleC)&&(angleB==angleD)&&(sideA == sideC)&&(sideB == sideD);
    } 