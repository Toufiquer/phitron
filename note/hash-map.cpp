#include <iostream>
#include <string>
#include <unordered_map> // Include the header for unordered_map

int main() {
    // ------------------------------------
    // Declaration
    // ------------------------------------
    // The template parameters are: Key type, Value type.
    // Here, we declare a hash map with string keys and integer values.
    std::unordered_map<std::string, int> student_scores;

    std::cout << "--- Hash Map Operations ---" << std::endl;

    // ------------------------------------
    // 1. Insertion
    // ------------------------------------
    std::cout << "\n1. Inserting elements..." << std::endl;

    // Method a: Using the subscript operator []
    // If the key "Alice" does not exist, it is created.
    // If it already exists, its value is updated.
    student_scores["Alice"] = 95;
    student_scores["Bob"] = 88;

    // Method b: Using the insert() method with std::make_pair
    // insert() returns a pair: an iterator to the element and a bool indicating success.
    // It will not overwrite the value if the key already exists.
    student_scores.insert(std::make_pair("Charlie", 92));
    auto result = student_scores.insert(std::make_pair("Alice", 100)); // This will fail because "Alice" already exists
    if (!result.second) {
        std::cout << "   -> Insertion failed for key 'Alice' because it already exists." << std::endl;
    }

    // Method c: Using emplace() (C++11 and later)
    // Generally more efficient as it constructs the object in-place.
    student_scores.emplace("David", 78);

    std::cout << "   -> Current map size: " << student_scores.size() << std::endl;

    // ------------------------------------
    // 2. Accessing Keys and Values
    // ------------------------------------
    std::cout << "\n2. Accessing elements..." << std::endl;

    // Method a: Using the subscript operator []
    // NOTE: If the key doesn't exist, this operator will create a new element
    // with that key and a default-constructed value (e.g., 0 for int).
    int bobs_score = student_scores["Bob"];
    std::cout << "   -> Bob's score (using []): " << bobs_score << std::endl;

    // Method b: Using the at() method
    // at() provides bounds checking. If the key does not exist, it throws
    // a std::out_of_range exception. This is safer for read-only access.
    try {
        int charlies_score = student_scores.at("Charlie");
        std::cout << "   -> Charlie's score (using at()): " << charlies_score << std::endl;
        
        // Uncommenting the next line would cause an exception
        // int eve_score = student_scores.at("Eve");
    } catch (const std::out_of_range& e) {
        std::cout << "   -> Error accessing non-existent key: " << e.what() << std::endl;
    }

    // ------------------------------------
    // 3. Search (Checking for a key)
    // ------------------------------------
    std::cout << "\n3. Searching for a key..." << std::endl;
    
    // Method a: Using the find() method
    // find() returns an iterator to the element if found, otherwise it returns
    // an iterator to map.end(). This is the most common way to search.
    std::string search_key = "David";
    if (student_scores.find(search_key) != student_scores.end()) {
        std::cout << "   -> Key '" << search_key << "' was found in the map." << std::endl;
    } else {
        std::cout << "   -> Key '" << search_key << "' was not found." << std::endl;
    }

    std::string non_existent_key = "Eve";
    if (student_scores.find(non_existent_key) == student_scores.end()) {
        std::cout << "   -> Key '" << non_existent_key << "' was not found." << std::endl;
    }

    // Method b: Using the count() method (C++11 and later)
    // Since keys are unique, count() returns 1 if the key exists and 0 otherwise.
    if (student_scores.count("Alice")) {
        std::cout << "   -> Key 'Alice' exists (checked with count())." << std::endl;
    }

    // ------------------------------------
    // 4. Iteration
    // ------------------------------------
    std::cout << "\n4. Iterating through the map..." << std::endl;

    // A range-based for loop (C++11 and later) is the easiest way to iterate.
    // Each element is a std::pair<const Key, Value>.
    for (const auto& pair : student_scores) {
        // pair.first is the key (it's const)
        // pair.second is the value
        std::cout << "   -> Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }
    // Note: The order of iteration is not guaranteed to be alphabetical or insertion order.

    // ------------------------------------
    // 5. Deletion (Bonus)
    // ------------------------------------
    std::cout << "\n5. Deleting an element..." << std::endl;
    student_scores.erase("Bob");
    std::cout << "   -> 'Bob' has been removed from the map." << std::endl;
    std::cout << "   -> Final map contents:" << std::endl;
    for (const auto& pair : student_scores) {
        std::cout << "      Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}