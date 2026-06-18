package _04_FileHandling;

import java.io.FileWriter;
import java.io.IOException;

public class File_Writer {
    public static void main(String[] args) {
        try (FileWriter writer = new FileWriter("MyFile.txt")){
            writer.write("This is my file");
            writer.flush();
            System.out.println("File written successfully");
        } catch (IOException e){
            System.out.printf("Exception occurred %s\n" , e.getMessage());
        }
    }
}
