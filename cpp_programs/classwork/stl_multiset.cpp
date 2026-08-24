  #include<iostream>
  #include<set>
  

  
  int main()
  {
  
  
  // ============================================================
    //                       MULTISET
    // ============================================================

    std::cout << std::endl
              << "================ MULTISET ================"
              << std::endl
              << std::endl;

    // multiset allows DUPLICATE elements
    // Elements are still maintained in sorted order

    std::multiset<int> values;

    // ------------------------------------------------------------
    // 1. insert()
    // ------------------------------------------------------------

    values.insert(50);
    values.insert(20);
    values.insert(40);
    values.insert(20);
    values.insert(30);
    values.insert(20);
    values.insert(50);

    std::cout << "Elements of multiset: ";

    for (std::multiset<int>::iterator iterator = values.begin();
         iterator != values.end();
         ++iterator)
    {
        std::cout << *iterator << " ";
    }

    std::cout << std::endl;

    // Output:
    // 20 20 20 30 40 50 50


    // ------------------------------------------------------------
    // 2. size()
    // ------------------------------------------------------------

    std::cout << "Size of multiset: "
              << values.size() << std::endl;


    // ------------------------------------------------------------
    // 3. find()
    // ------------------------------------------------------------

    std::multiset<int>::iterator multiIterator = values.find(20);

    if (multiIterator != values.end())
    {
        std::cout << "20 is present in multiset" << std::endl;
    }


    // ------------------------------------------------------------
    // 4. count()
    // ------------------------------------------------------------

    std::cout << "Count of 20: "
              << values.count(20) << std::endl;

    std::cout << "Count of 50: "
              << values.count(50) << std::endl;


    // ------------------------------------------------------------
    // 5. erase(value)
    // ------------------------------------------------------------

    // IMPORTANT:
    // In multiset, erase(value) removes ALL occurrences
    // of that value.

    values.erase(20);

    std::cout << "After erase(20): ";

    for (std::multiset<int>::iterator iterator = values.begin();
         iterator != values.end();
         ++iterator)
    {
        std::cout << *iterator << " ";
    }

    std::cout << std::endl;


    // ------------------------------------------------------------
    // 6. Erasing only ONE occurrence
    // ------------------------------------------------------------

    values.insert(20);
    values.insert(20);
    values.insert(20);

    std::cout << "Before erasing one 20: ";

    for (std::multiset<int>::iterator iterator = values.begin();
         iterator != values.end();
         ++iterator)
    {
        std::cout << *iterator << " ";
    }

    std::cout << std::endl;

    multiIterator = values.find(20);

    if (multiIterator != values.end())
    {
        values.erase(multiIterator);
    }

    std::cout << "After erasing one 20: ";

    for (std::multiset<int>::iterator iterator = values.begin();
         iterator != values.end();
         ++iterator)
    {
        std::cout << *iterator << " ";
    }

    std::cout << std::endl;


    // ------------------------------------------------------------
    // 7. lower_bound()
    // ------------------------------------------------------------

    multiIterator = values.lower_bound(20);

    if (multiIterator != values.end())
    {
        std::cout << "lower_bound(20): "
                  << *multiIterator << std::endl;
    }


    // ------------------------------------------------------------
    // 8. upper_bound()
    // ------------------------------------------------------------

    multiIterator = values.upper_bound(20);

    if (multiIterator != values.end())
    {
        std::cout << "upper_bound(20): "
                  << *multiIterator << std::endl;
    }


    // ------------------------------------------------------------
    // 9. equal_range()
    // ------------------------------------------------------------

    std::pair<std::multiset<int>::iterator,
              std::multiset<int>::iterator> range;

    range = values.equal_range(20);

    std::cout << "All occurrences of 20: ";

    for (std::multiset<int>::iterator iterator = range.first;
         iterator != range.second;
         ++iterator)
    {
        std::cout << *iterator << " ";
    }

    std::cout << std::endl;


    // ------------------------------------------------------------
    // 10. clear()
    // ------------------------------------------------------------

    values.clear();

    std::cout << "Size after clear(): "
              << values.size() << std::endl;

    return 0;
}