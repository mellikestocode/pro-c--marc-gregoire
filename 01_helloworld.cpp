import std;
import std::numeric_limits;

int main()
{
    std::println("Hello, World!");
    int value;
    std::cin >> value;
    std::println("You entered {}", value);

    std::println("int: ");
    std::println("Max int value: {}", numeric_limits<int>::max());
    std::println("Min int value: {}", numeric_limits<int>::min());
    std::println("lowest int value: {}", numeric_limits<int>::lowest());

    std::println("\ndouble: ");
    std::println("Max double value: {}", numeric_limits<double>::max());
    std::println("Min double value: {}", numeric_limits<double>::min());
    std::println("Lowest double value: {}", numeric_limits<double>::lowest());

    std::println("\nCasting values instead of joining a casting couch crew");

    float myFloat { 3.14f };
    int i1 { (int)myFloat };
    int i2 { int (myFloat) };
    int i3 { static_cast<int>(myFloat) };

    int i { 0 };
    while (i < 5) {
        println("This is silly.");
        ++i;
    }
    int i { 8 };
    int* myIntegerPointer { &i };

    Employee* anEmployee { new Employee { 'J', 'D', 42, 80'000 } };
    println("{}", (*anEmployee).salary);
    delete anEmployee; anEmployee = nullptr;
    return 0; // return non-zero value if error
}

struct Employee {
    char firstInitial;
    char lastInitial;
    int employeeNumber;
    int salary { 600,000 };
};