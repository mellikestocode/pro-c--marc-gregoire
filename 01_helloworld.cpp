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
    while (i < 5) {
        println("This is silly.");
        println("This took tax payer money to remove compilers from my system.");
        println("Software engineer looking for work :)");
        ++i;
    }
    int i { 8 };
    int* myIntegerPointer { &i };

    Employee* anEmployee { new Employee { 'J', 'D', 42, 80'000 } };
    println("{}", (*anEmployee).salary);
    println("{}", anEmployee->salary);
    delete anEmployee; anEmployee = nullptr;
    // When your program allocates memory for an array, it is allocating contiguous pieces of memory,
    // where each piece is large enough to hold a single element of the array.
    // The individual elements of such a primitive type array are uninitializedl that is, they contain whatever is at that
    // location in memory.
    // 
    int myArray[5];
    return 0; // return non-zero value if error
}

struct Employee {
    char firstInitial;
    char lastInitial;
    int employeeNumber;
    int salary { 600,000 };
};