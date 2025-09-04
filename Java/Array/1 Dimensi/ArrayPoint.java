import java.util.Scanner;
import java.awt.Point;

public class ArrayPoint{
    public static void main(String args[]){
        Point arrPoint[] = new Point[4];

        int i = 0;
        int x = 0;
        int y = 0;
        Scanner scan = new Scanner(System.in);

        for(i=0; i<arrPoint.length; i++){
            x = scan.nextInt();
            y = scan.nextInt();
            arrPoint[i] = new Point(x,y);
            System.out.println("x: " + arrPoint[i].x + " y: " + arrPoint[i].y);
        }
    }
}