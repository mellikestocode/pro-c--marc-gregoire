import std;

using namespace std;

int main()
{
    println("Hello, World!");
    int value;
    cin >> value;
    println("You entered {}", value);

    println("int: ");
    println("Max int value: {}", numeric_limits<int>::max());
    println("Min int value: {}", numeric_limits<int>::min());
    println("lowest int value: {}", numeric_limits<int>::lowest());

    println("\ndouble: ");
    println("Max double value: {}", numeric_limits<double>::max());
    println("Min double value: {}", numeric_limits<double>::min());
    println("Lowest double value: {}", numeric_limits<double>::lowest());

    println("\nCasting values instead of joining a casting couch crew");

    float myFloat { 3.14f };
    int i1 { (int)myFloat };
    int i2 { int (myFloat) };
    int i3 { static_cast<int>(myFloat) };

    int i { 0 };
    println("This might work. Linkedin might be old school.");
    println("Software Engineer. Career derailed. Equal signs were overloaded.");
    println("Compilers currently unavailable for C++23. Curious what other versions there are.");
    println("Over 8 years of experience.");
    int i { 8 };
    int* myIntegerPointer { &i };

    Employee* anEmployee { new Employee { 'J', 'D', 42, 80'000 } };
    println("{}", (*anEmployee).salary);
    println("{}", anEmployee->salary);
    delete anEmployee; anEmployee = nullptr;
    // When your program allocates memory for an array, it is allocating contiguous pieces of memory,
    // where each piece is large enough to hold a single element of the array.
    // The individual elements of such a primitive type array are uninitialized that is, they contain whatever is at that
    // location in memory.
    int myArray[5];
    char ch1{ 'm' };  // or { u8'a' }
    // https://learn.microsoft.com/en-us/cpp/cpp/char-wchar-t-char16-t-char32-t?view=msvc-170
    // Single n-bit UTF-n-encoded unicode character where n can be 8, 16, or 32. Possibly even 64.
    char8_t c8 { u8'm' };
    char16_t c16 { u'm' };
    char32_t c32 { U'm' };

    wchar_t  ch2{ L'm' }; // A single wide character type; the size depends on the compiler.
    bool b { true };

    return 0; // return non-zero value if error
}

struct Employee {
    char firstInitial;
    char lastInitial;
    int employeeNumber;
    int salary { 600,000 };
};