package task1;

public class Lab03_1B_210041132_task1 {
    public static void main(String[] args) {
        Sphere sphere = new Sphere(3.0);
        Cube cube = new Cube(4.0);

        System.out.println("Sphere Volume: " + sphere.calculateVolume());
        System.out.println("Sphere Surface Area: " + sphere.calculateSurfaceArea());

        System.out.println("Cube Volume: " + cube.calculateVolume());
        System.out.println("Cube Surface Area: " + cube.calculateSurfaceArea());
    }
}