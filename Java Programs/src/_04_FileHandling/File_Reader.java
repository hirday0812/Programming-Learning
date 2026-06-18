package _04_FileHandling;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

public class File_Reader {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the file you want to read : ");
        String fileName = input.nextLine();

        try(FileReader reader = new FileReader(fileName)){
            int read;
            while ((read = reader.read()) != -1){
                System.out.print((char) read);
            }
        }
        catch (FileNotFoundException e){
            System.out.printf("%s is not found " , fileName);
        }

        catch (IOException e) {
            System.out.printf("Exception occurred %s " , e.getMessage());
        }
    }
}
