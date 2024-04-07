interface RestoEmployees {
    void washDishes();
    void serveCustomers();
    void cookFood();
}


class waiter implements RestoEmployees{
    public void washDishes(){
        // not my job
    }
    public void serveCustomers(){
        //serve implementation
    }
    public void cookFood(){
        // not my job
    }
}
// segmented interfaces
 interface waiterInterface {
    void takeOrder();
    void serveCustomers();
 }

 interface chefInterface {
    void decideMenu();
    void cookFood();
 }