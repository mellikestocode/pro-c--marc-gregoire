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

    std::println("\nCasting instead of the casting couch");

    float myFloat { 3.14f };
    int i1 { (int)myFloat };
    int i2 { int (myFloat) };
    int i3 { static_cast<int>(myFloat) };

    return 0; // return non-zero value if error
}
