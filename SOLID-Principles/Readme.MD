## S - Single Responsbility Principal
## 0 - Open / Close Principal
## L - Liskov Substitution Principal
## I - Interface Segmented Principal
## D - Dependency Inversion Principal



### S - Single
#### => a class should have only 1 reason to change

### O - Open / Close Principal
#### => open for extension but close for extension

### L - Liskov Substitution Principal
#### => if class b is subtype of class a, than we should be able to replace object of A with B without breaking the behavior of the program.
subclass should extend the capabilitie of the class not to narrow down..

## I - Interface Segmented Principal
#### => interface should be such, that client should implemnet unnecessary functions they do not need

## D - Dependency Inversion Principal
#### => class should depend on interface rather than concrete classes