import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class Movie {
    String name;
    String type;
    String hero;
    String heroine;
    double budget;

    Movie(String name, String type, String hero, String heroine, double budget) {
        this.name = name;
        this.type = type;
        this.hero = hero;
        this.heroine = heroine;
        this.budget = budget;
    }
}

public class MovieManagement {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        ArrayList<Movie> movies = new ArrayList<>();

        // Accept movie information from the user
        int numberOfMovies;
        System.out.print("Enter the number of movies: ");

        numberOfMovies = sc.nextInt();
        for (int i = 0; i < numberOfMovies; i++) {
            System.out.println("Enter information for Movie " + (i + 1) +
                    ":");
            System.out.print("Name: ");
            String name = sc.next();
            System.out.print("Type: ");
            String type = sc.next();
            System.out.print("Hero: ");
            String hero = sc.next();
            System.out.print("Heroine: ");
            String heroine = sc.next();
            System.out.print("Budget (in Rs): ");
            double budget = sc.nextDouble();
            Movie movie = new Movie(name, type, hero, heroine, budget);
            movies.add(movie);
        }
        
        // Sort movies by budget
        Collections.sort(movies, Comparator.comparingDouble(movie -> movie.budget));
        // Display the sorted movies
        System.out.println("\nMovies sorted by budget:");
        for (Movie movie : movies) {
            System.out.println("Name: " + movie.name);
            System.out.println("Type: " + movie.type);
            System.out.println("Hero: " + movie.hero);
            System.out.println("Heroine: " + movie.heroine);
            System.out.println("Budget (in Rs): " + movie.budget);
            System.out.println();
        }
        sc.close();
    }
}
