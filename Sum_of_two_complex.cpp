#include<bits/stdc++.h>
using namespace std;
  
 
class Complex { 
    public:
        int real, imaginary; 
    Complex(int tempReal = 0, int tempImaginary = 0)
    {
        real = tempReal;
        imaginary = tempImaginary;
    }
    void display(void)
    {
      cout << " The Complex numeber is: " << real << " + " << imaginary << "i" << endl;
    }
    void sum_display(void)
    {
      cout << " The Sum of two Complex numeber is: " << real << " + " << imaginary << "i" << endl;
    }
 
    Complex addComp(Complex C1, Complex C2)
    { 
        Complex temp; 
        temp.real = C1.real + C2.real; 
        temp.imaginary = C1.imaginary + C2.imaginary; 
        return temp;
    }
}; 
int main()
{ 
    Complex C1(3, 2); 
    C1.display();
 
    Complex C2(9, 5); 
    C2.display();
    Complex C3; 
    C3 = C3.addComp(C1, C2); 
    C3.sum_display();
}
