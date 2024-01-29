package Lab02_1B_210041132;

class ElectronicDevice {
    private String name;
    private double price;
    private static int serialNumber=1;
    private String modelNumber;

    public ElectronicDevice(String name, double price) {
        this.name = name;
        this.price = price;
        this.modelNumber = name + serialNumber;
        serialNumber++;

    }

    public void powerOn() {
        System.out.println(name + " turning on");
    }

    public void powerOff() {
        System.out.println(name + " turning off");
    }

    public String getName() {
        return name;
    }

    public String getModelNumber() {
        return modelNumber;
    }

    public double getPrice(){
        return price;
    }
}