
interface Bike{
    void turnOnEngine();
    void accelerate();
}

class Motorcycle implements Bike{
     boolean  isEngineOn;
     int speed;

     public void turnOnEngine(){
        // do something
        isEngineOn = true;
     }

     public void accelerate(){
        speed = speed+10;
     }

}

// narrow down properties
class Bicycle implements Bike{
    public void turnOnEngine(){
        throw new AssertionError('there is no engine';)
    }

    public void accelerate(){
        speed = speed+10;
    }
}

