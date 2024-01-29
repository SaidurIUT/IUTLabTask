package sampletask;

public class Coffee extends Baverage {

    boolean hasSuger;

    Coffee(String name , float temp ,boolean hasSuger){
        super(name ,temp);
        this.hasSuger = hasSuger;
    }
    

    @Override
    String getName(){
        return "I am drinking coffee";
    }
}
