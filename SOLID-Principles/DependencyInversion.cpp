class Macbook{
    private final Wiredkeyboard keyboard;
    private final WiredMouse mouse;


    public Macbook(){
        keyboard = new Wiredkeyboard();
        mouse = new Wiredmouse();
    }
}


// with dependencies inversion

class Macbook{
    private final Mouse mouse;
    private final Keyboard keyboard;


    public Macbook(Keyboard keyboard, Mouse mouse){
        this.keyboard = keyboard;
        this.mouse = mouse;
    }
}