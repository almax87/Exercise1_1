    #include "parallelogramm.h"
    
    void Parallelogramm::check() 
    {
        Quadrangle::check();
        if ((angleA_== angleC_)&&(angleB_== angleD_))
            throw FigureException{"Углы попарно не равны"};
        if ((sideA_ == sideC_)&&(sideB_ == sideD_))
            throw FigureException{"Стороны попарно не равны"};
    } 