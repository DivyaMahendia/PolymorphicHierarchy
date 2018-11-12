# **Polymorphism**:question:
**Polymorphism is the ability for a message or data to be processed in more than one form.**

Example:-
If you give input 5+7, it results into 12, the sum of 5 and 7. And if you give 'A' + 'BC', it results into 'ABC', the concatenated strings.
The same operation symbol '+' is able to distinguish between the two operations (summation and concatenation) depending upon the data type it is working on.

Types of Polymorphism:-
 - Compile time Polymorphism (achieved by Function Overloading or Operator Overloading).
 - Runtime Polymorphism (achieved by Function Overriding).

- [ ] Binding is the process through which a specific instance of a function call (method invocation) is bound (related) to the appropriate member function of an appropriate class. This may happen at compile time (static binding) or run time (dynamic binding).

# Problem statement
  - An organization needs to develop a salary processing application for its staff.
  - At present it has an engineering division where only Engineers and Managers work. Every Engineer reports to some Manager. Every Manager can also work like an Engineer.
  - The logic for processing salary for Engineers and Managers are different as they have different salary heads.
  - In future, it may add Directors to the team. Then every Manager will report to some Director. Every Director could also work like a Manager.
  - The logic for processing salary for Directors will also be distinct.
  - Further, in future it may open other divisions, like Sales division, and expand the workforce.
  - Make a suitable extensible design.
