package task1;

public class Cube extends Shape3D {
    private double sideLength;

    // Constructor
    public Cube(double sideLength) {
        this.sideLength = sideLength;
    }

    // Implementation of abstract methods for volume and surface area
    @Override
    public double calculateVolume() {
        return Math.pow(sideLength, 3);
    }

    @Override
    public double calculateSurfaceArea() {
        return 6 * Math.pow(sideLength, 2);
    }
}