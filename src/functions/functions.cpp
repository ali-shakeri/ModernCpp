// 1.  declaration vs definition
void swap (int&, int&);

void swap (int& a, int& b)
{
        auto tmp = a;
        a = b;
        b = tmp;
}

// 2. return values
std::string to_string (int a);          // prefix return
auto to_string (int a) -> std::string;  // suffix return
// why suffix return?
template<typename T, typename U>
auto product (const std::vector<T>& x, const std::vector<U>& y) -> decltype(x*y);

// 3. There can be more than one return statement
int factorial (int n)
{
        if (n>1)
                return n*factorial(n-1);
        else
                return 1;
}

