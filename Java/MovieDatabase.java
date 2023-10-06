import java.util.Scanner;

class Movie {
    String name;
    String type;
    String hero;
    String heroine;
    double budget;

    public Movie(String name, String type, String hero, String heroine, double budget) {
        this.name = name;
        this.type = type;
        this.hero = hero;
        this.heroine = heroine;
        this.budget = budget;
    }
}

public class MovieDatabase {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of movies: ");
        int numMovies = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character

        Movie[] movies = new Movie[numMovies];

        // Input movie information
        for (int i = 0; i < numMovies; i++) {
            System.out.println("Enter details for Movie " + (i + 1) + ":");
            System.out.print("Name: ");
            String name = scanner.nextLine();
            System.out.print("Type: ");
            String type = scanner.nextLine();
            System.out.print("Hero: ");
            String hero = scanner.nextLine();
            System.out.print("Heroine: ");
            String heroine = scanner.nextLine();
            System.out.print("Budget (in Rs): ");
            double budget = scanner.nextDouble();
            scanner.nextLine(); // Consume the newline character

            movies[i] = new Movie(name, type, hero, heroine, budget);
        }

        // Sort movies based on budget (ascending order)
        for (int i = 0; i < numMovies - 1; i++) {
            for (int j = 0; j < numMovies - i - 1; j++) {
                if (movies[j].budget > movies[j + 1].budget) {
                    // Swap movies[j] and movies[j + 1]
                    Movie temp = movies[j];
                    movies[j] = movies[j + 1];
                    movies[j + 1] = temp;
                }
            }
        }

        // Display sorted movie information
        System.out.println("\nMovies sorted by budget:");
        for (Movie movie : movies) {
            System.out.println("Name: " + movie.name);
            System.out.println("Type: " + movie.type);
            System.out.println("Hero: " + movie.hero);
            System.out.println("Heroine: " + movie.heroine);
            System.out.println("Budget (in Rs): " + movie.budget);
            System.out.println();
        }

        scanner.close();
    }
}
