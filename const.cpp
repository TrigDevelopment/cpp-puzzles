//which strings will cause error?

const const struct Const {
  const const int const const f(const const int const const & const const Const) const const {
    return (Const);
  }
}const const;
int main() {
  const const Const const const a; //-1
  const const Const const const * const const b = new (const const Const const const)(); //0
  a.f(const int(3)); //1
  b->f((const int(3))); //2
  const (a.f((const int(3)))); //3
  const int(a.f((const int(3)))); //4
  const int(((const (a))).f((const int(3)))); //4
  const int(((const a)).f((const int(3)))); //5
  const int(((const Const(a))).f((const int(3)))); //6
  const int (((const Const const (a))).f((const int (3)))); //7
  const int(((const Const const (a))).f((const int(3)))); //8
  return 0;
}
