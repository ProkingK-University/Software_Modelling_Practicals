# Decorator & Strategy Design Pattern:

Both the Decorator and Strategy design patterns are part of the Gang of Four (GoF) design patterns, which are widely used to solve recurring design problems in software development.

### Decorator Design Pattern:
The Decorator pattern is a structural design pattern that allows you to dynamically add behavior or responsibilities to objects without altering their code. This pattern is useful when you need to add features to individual objects in a flexible and reusable manner, as opposed to creating new subclasses for every combination of features.

In the Decorator pattern, you have a base component interface or class that defines the basic behavior. Then, you have concrete components that implement this interface. Decorators, on the other hand, are classes that also implement the base component interface but wrap concrete components to provide additional functionality.

Here's how the pattern works:

* Component: This is the base interface or class that defines the basic operations that concrete components and decorators must implement.

* Concrete Component: These are the basic objects you want to add behavior to. They implement the component interface and provide the core functionality.

* Decorator: This is an abstract class that implements the component interface and contains a reference to a component. Decorators add new behavior by wrapping concrete components and providing additional operations.

* Concrete Decorator: These are classes that extend the decorator class. They add specific behaviors or responsibilities to the wrapped component.

The Decorator pattern promotes the principle of open-closed design (open for extension, closed for modification) and allows you to compose objects with different combinations of behaviors at runtime.

### Strategy Design Pattern:
The Strategy pattern is a behavioral design pattern that defines a family of interchangeable algorithms, encapsulates them in separate classes, and makes them interchangeable. This pattern is useful when you want to provide different ways of performing a certain operation or behavior without changing the client code that uses these behaviors.

In the Strategy pattern:

* Strategy: This is an interface or abstract class that defines a set of methods or operations that different concrete strategies must implement.

* Concrete Strategies: These are the classes that implement the strategy interface. Each concrete strategy provides a different implementation of the defined operations.

* Context: This is the class that uses the strategy objects. The context maintains a reference to a strategy object and delegates the execution of its operations to the strategy.

By encapsulating different algorithms as strategies, you can easily switch between strategies at runtime, allowing for more flexibility and adaptability in your application. This pattern is particularly useful when you have behaviors that may change frequently or when you want to decouple client code from the specific implementation details of the algorithms.

![Alt text](<Screenshot from 2023-08-28 15-25-58.png>)

The before and after decorators in your code are intended to provide setup and cleanup actions before and after running a test. These decorators allow you to extend the behavior of a test, for example, by setting up some preconditions or performing some actions before the test runs, and by cleaning up or performing additional tasks after the test execution.

To alter the actions of the before and after decorators, you can customize the behavior according to your specific testing needs. Here are some ways you can modify their actions:

### Before Decorator:

1. *Preconditions*: If your tests require specific conditions to be met before they can run, the before decorator is a great place to set up these preconditions. For instance, you can create a "before" decorator that initializes certain resources, databases, or services that your test depends on.

2. *Mocking*: If you need to mock data or external services for testing, you can modify the "before" decorator to mock the necessary components before the test runs. This ensures that your tests are isolated and not affected by external dependencies.

3. *Data Setup*: If your test requires specific data to be available, the before decorator can populate databases, create test fixtures, or initialize test data that your test will use.

### After Decorator:

1. *Cleanup*: The after decorator is suitable for cleaning up resources created during the test. For example, if your test writes data to a temporary database, the after decorator can clean up this data afterward.

2. *State Restoration*: If your test modifies the system's state during execution, the after decorator can be used to restore the original state, ensuring that subsequent tests start with a clean slate.

3. *Logging and Reporting*: The after decorator can be used to log and report the results of the test. You might want to record whether the test passed or failed, any errors encountered, or performance metrics.

4. *Performance Profiling*: If you're interested in measuring performance metrics, the after decorator can capture performance data during the test and provide relevant analysis afterward.

5. *Resource Management*: The after decorator can release resources that were acquired before the test, ensuring that no resources are left hanging or causing leaks.

Remember that the flexibility of decorators allows you to create custom decorators that suit your specific testing needs. You can also combine multiple decorators to achieve more complex behaviors. For example, you could have a decorator that sets up a database connection (before), runs the test, and then closes the connection and logs results (after).

Overall, by altering the actions of the before and after decorators, you can tailor your testing framework to provide the necessary setup and cleanup routines that make your testing process efficient, isolated, and comprehensive.