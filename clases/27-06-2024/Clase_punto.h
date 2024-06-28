using namespace std;
#include <stdio.h>
class complex
{
    private:
    
        float real;
        float img;   
    
    public:
    
       void print_complex();
       void set_real(float input);
       void set_img(float input);
    


    
};

complex::complex()
{
real=0;
img=0;
}

complex::~complex()
{

}