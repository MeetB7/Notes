import java.awt.*;
import javax.swing.JFrame;

public class GraphicsExample extends Canvas {

    public void paint(Graphics g) {
        // Draw a red rectangle
        g.setColor(Color.RED);
        g.fillRect(100, 100, 200, 150);

        // Draw a blue oval
        g.setColor(Color.BLUE);
        g.fillOval(250, 200, 100, 100);

        // Draw black text
        g.setColor(Color.BLACK);
        g.setFont(new Font("Arial", Font.PLAIN, 24));
        g.drawString("Hello, Graphics!", 150, 50);
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("Graphics Example");
        GraphicsExample canvas = new GraphicsExample();

        frame.add(canvas);
        frame.setSize(500, 400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
