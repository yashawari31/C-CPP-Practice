#include <iostream>
#include <set>

int main()
{
    // ============================================================
    //                         SET
    // ============================================================

    std::cout << "================ SET ================" << std::endl << std::endl;

    // set stores UNIQUE elements in sorted order
    std::set<int> numbers;

    // ------------------------------------------------------------
    // 1. insert()
    // ------------------------------------------------------------

    numbers.insert(50);
    numbers.insert(20);
    numbers.insert(40);
    numbers.insert(10);
    numbers.insert(30);

    // Duplicate value will NOT be inserted
    numbers.insert(30);
    numbers.insert(20);

    std::cout << "Elements of set: ";

    for (std::set<int>::iterator iterator = numbers.begin();
         iterator != numbers.end();
         ++iterator)
    {
        std::cout << *iterator << " ";
    }

    std::cout << std::endl;

    // Output:
    // 10 20 30 40 50


    // ------------------------------------------------------------
    // 2. size()
    // ------------------------------------------------------------

    std::cout << "Size of set: "
              << numbers.size() << std::endl;


    // ------------------------------------------------------------
    // 3. find()
    // ------------------------------------------------------------

    std::set<int>::iterator iterator = numbers.find(30);

    if (iterator != numbers.end())
    {
        std::cout << "30 is present in set" << std::endl;
    }
    else
    {
        std::cout << "30 is not present in set" << std::endl;
    }


    // ------------------------------------------------------------
    // 4. count()
    // ------------------------------------------------------------

    // In set, count() can return only 0 or 1
    std::cout << "Count of 30: "
              << numbers.count(30) << std::endl;

    std::cout << "Count of 100: "
              << numbers.count(100) << std::endl;


    // ------------------------------------------------------------
    // 5. erase(value)
    // ------------------------------------------------------------

    numbers.erase(30);

    std::cout << "After erasing 30: ";

    for (std::set<int>::iterator iterator = numbers.begin();
         iterator != numbers.end();
         ++iterator)
    {
        std::cout << *iterator << " ";
    }

    std::cout << std::endl;


    // ------------------------------------------------------------
    // 6. lower_bound()
    // ------------------------------------------------------------

    iterator = numbers.lower_bound(25);

    if (iterator != numbers.end())
    {
        std::cout << "lower_bound(25): "
                  << *iterator << std::endl;
    }


    // ------------------------------------------------------------
    // 7. upper_bound()
    // ------------------------------------------------------------

    iterator = numbers.upper_bound(25);

    if (iterator != numbers.end())
    {
        std::cout << "upper_bound(25): "
                  << *iterator << std::endl;
    }


    // ------------------------------------------------------------
    // 8. empty()
    // ------------------------------------------------------------

    std::cout << "Is set empty? ";

    if (numbers.empty())
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }


    // ------------------------------------------------------------
    // 9. clear()
    // ------------------------------------------------------------

    numbers.clear();

    std::cout << "Size after clear(): "
              << numbers.size() << std::endl;

}