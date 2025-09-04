import java.util.Scanner;

public class CobaArrayString{
    public static void main(String args[]){
        String arr[] = new String[5];
        arr[0] = "Satu";

        System.out.println("Isi array ke-0" + arr[0]);

        int i = 0;
        int e = 0;
        Scanner scan = new Scanner(System.in);

        for(i=0; i<5; i++){
            arr[i] = scan.next();
            System.out.println("Isi array ke: " + 1 + " adalah " + arr[i]);
        }
    }
}