# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <iomanip>

double Cylinder :: SurfaceArea(){
    double ans=2*3.1415926535*radius*height+2*3.1415926535*radius*radius;
    return ans;
}

double Cylinder :: Volume(){
    double ans=3.1415926535*radius*radius*height;
    return ans;
}

double Cylinder :: Circumference(){
    double ans=2*3.1415926535*radius;
    return ans;
}

istream & operator>>(istream & in, Cylinder & cldr){
    in>>cldr.radius>>clde.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr){
    out<<"Circumference: "<<fixed<<std::setprecision(3)<<cldr.Ciecumference()<<endl;
    out<<"SurfaceArea: "<<fixed<<std::setprecision(3)<<clde.SurfaceArea()<<endl;
    out<<"Volume: "<<fixed<<std::setprecision(3)<<cldr.Volume()<<endl;
    return out;
}

# endif
