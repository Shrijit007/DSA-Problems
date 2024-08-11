#include <bits/stdc++.h>
using namespace std;

class A{
};
//class B inheriting class A
class B : public A{
};
//class C inheriting class A
class C : public A{
};
//class D inheriting from B
class D :  public B{
};
//class E inheriting from C
class E :  public C{
};