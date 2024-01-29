package sampletask;


public class Tea extends Baverage {
    boolean hasMilk;

    Tea(String name , float temp ,boolean hasMilk){
        super(name,temp);
        this.hasMilk = hasMilk;
    }
    

    @Override
    String getName(){
        return "I am drinking tea";
    }
}
