## Assignment Title: Object-Oriented Programming (OOP) in C++: Building a Zoological Park Management System

### Description:

For this assignment, you will create a program that simulates a Zoological Park Management System. The system will include the creation of multiple classes to demonstrate the principles of Object-Oriented Programming (OOP) - specifically, encapsulation, abstraction, inheritance, and polymorphism.

### Part 1: Base Animal Class (Encapsulation and Abstraction)

Create a base class `Animal` that encapsulates the common characteristics and behaviors of animals in the park. The class should have the following private member variables:

- `name`: string
- `age`: integer
- `weight`: double
- `sound`: string

Also include the appropriate getter and setter methods for these variables (abstraction) to access and modify these private variables.

### Part 2: Derived Classes (Inheritance)

Create four derived classes `Mammal`, `Bird`, `Reptile` and `Fish`, each inheriting from the base class `Animal`. Each derived class should have additional characteristics or behaviors unique to their type. For example, `Mammal` can have a boolean variable `isAquatic`, `Bird` can have `wingSpan`, `Reptile` can have `isVenomous` etc.

### Part 3: Polymorphism

Create a virtual function in the base class `Animal` called `makeSound()` that will be overridden in each of the derived classes to print a message to the console that represents the sound the animal makes.

### Part 4: Zoo Class and Main Function

Create a `Zoo` class that holds a collection of `Animal` objects. This class should have the following functionalities:

- `addAnimal()`: This function will accept an object of `Animal` type (or its derivatives) and add it to the collection.
- `removeAnimal()`: This function will accept an animal's name and remove the corresponding animal from the collection.
- `listAnimals()`: This function will list all the animals currently in the zoo.

In your main function, create an object of `Zoo` and populate it with multiple objects of `Mammal`, `Bird`, `Reptile` and `Fish`. Demonstrate the use of `addAnimal()`, `removeAnimal()` and `listAnimals()` functions. Also, demonstrate the use of `makeSound()` function for different animal types.

### Constraints:

- Do not use any global variables.
- Use proper class and variable names, indentation and comments for better code readability.
- Handle potential exceptions where necessary.

### Evaluation:

Your assignment will be evaluated on the following criteria:

- Correct use of the OOP principles: encapsulation, abstraction, inheritance, and polymorphism.
- Code design, organization, and readability.
- Correct implementation of the `Zoo` class and its functionalities.
- Demonstrating the use of all created functions in the main function.
- Proper handling of exceptions and edge cases.

### Submission:

Please submit a zip file that contains all the C++ source code files (.cpp) and header files (.h) for your project. Include a separate .txt or .doc file with a brief explanation of your code design and the choices you made during the development.

### Deadline:

You have two weeks to complete and submit this assignment.

Happy coding!
