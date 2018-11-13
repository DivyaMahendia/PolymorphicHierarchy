//Static Binding and Dynamic Binding.

#include <iostream>
using namespace std;
class Base {
public:
void f() { cout << "Base::f()" << endl; }
virtual void g() { cout << "Base::g()" << endl; }
};
class Derived: public Base {
public:
void f() { cout << "Derived::f()" << endl; }
virtual void g() { cout << "Derived::g()" << endl; }
};
int main() {
Base b;
Derived d;
Base *pb = &b;
Base *pd = &d; // UPCAST
Base &rb = b;
Base &rd = d; // UPCAST
b.f(); // B::f()   [calling function using object]
b.g(); // B::g()
d.f(); // D::f()
d.g(); // D::g()
pb->f(); // B::f() -- Static Binding      [calling function using pointer]
pb->g(); // B::g() -- Dynamic Binding
pd->f(); // B::f() -- Static Binding
pd->g(); // D::g() -- Dynamic Binding
rb.f(); // B::f() -- Static Binding        [calling function using reference]
rb.g(); // B::g() -- Dynamic Binding
rd.f(); // B::f() -- Static Binding
rd.g(); // D::g() -- Dynamic Binding
return 0;
}
//pb->f(), pd->f() -- Static Binding ( which function it calls depends on the type of the pointer, known at the compiler time)
//pb->g(), pd->g() -- Dynamic Binding (which function it calls depends on what object it is pointing to, at run time)
