template < unsigned N >
struct factorial
{
  static constexpr unsigned value = N * factorial < N - 1 >::value;
};

template < >
struct factorial < 0 >
{
  static constexpr unsigned value = 1;
};

static_assert(2 == factorial < 2 >::value, "should factorial(2) == 2");
static_assert(3*2 == factorial < 3 >::value, "should factorial(2) == 6");
