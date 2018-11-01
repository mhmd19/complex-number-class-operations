#include <iostream>

using namespace std;

class Complex
{

private:
    double real;
    double imagine;
public:
    Complex()
    {
        real = imagine = 0;
    }
    Complex(double real_part)
    {
        real = real_part;
        imagine = 0;
    }
    Complex(double real_part, double m)
    {
        real = real_part;
        imagine = m;
    }
    Complex(Complex &object)
    {
        this -> real = object.real;
        this -> imagine = object.imagine;
    }
    Complex operator ==(Complex obj)
    {

        if (real == obj.real&&imagine == obj.imagine)
        {
            cout<<"true";
        }
        else;
        cout<<"false";
    }
    Complex operator +(Complex obj)
    {
        Complex ob;

        ob.real = this -> real + obj.real;
        ob.imagine = this -> imagine + obj.imagine;
        return ob;
    }
    Complex operator -(Complex obj)
    {
        Complex ob;

        ob.real = real - obj.real;
        ob.imagine = imagine - obj.imagine;
        return ob;
    }
    Complex operator *(Complex &obj)
    {
        Complex ob;
        ob.real = (real * obj.real)-(obj.imagine*imagine);
        ob.imagine = (real * obj.real)+(obj.imagine*imagine);
        return ob;
    }

    friend ostream &operator <<(ostream &out,Complex &c)
    {
        out << " the result is " << endl;
        out <<  c.real << "+" << c.imagine << "i"  << endl;
        return out;
    }

    friend istream &operator >>(istream &in,Complex &c)
    {
        cout << "enter the real and imaginary number" << endl;
        in >> c.real >> c.imagine;
        return in;
    }

};
///istream &operator >>(istream &in,Complex &c)

///ostream &operator <<(ostream &out,Complex &c)

int main()
{
    int s;
    Complex x;
    Complex y;
    Complex z;
    cout << "Enter the operation you chooses" << endl;
    cout << " press 1 for addition\n press 2 for subtraction\n press 3 for multiplication\n";
    cin >> s;
    if (s == 1)
    {
        cin >> x;
        cin >> y;
        z = x+y;
        cout << z << endl;
    }
    if (s == 2)
    {
        cin >> x;
        cin >> y;
        z = x-y;
        cout << z << endl;
    }
    if (s == 3)
    {
        cin >> x;
        cin >> y;
        z = x*y;
        cout << z << endl;
    }
    return 0;
}
