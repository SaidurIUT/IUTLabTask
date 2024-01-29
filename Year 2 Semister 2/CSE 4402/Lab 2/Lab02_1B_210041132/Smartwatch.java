package Lab02_1B_210041132;

class Smartwatch extends ElectronicDevice {
    public Smartwatch(String name, double price, String modelNumber) {
        super(name, price);
    }

    public void checkVitals() {
        System.out.println("Checking vitals");
    }
}