import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class CalculatorGUI extends JFrame implements ActionListener {
    private JTextField textField;
    private double num1, num2, result;
    private int operator;

    public CalculatorGUI() {
        setTitle("Simple Calculator");
        setLayout(new BorderLayout());
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(300, 400);
        
        textField = new JTextField();
        textField.setEditable(false);
        add(textField, BorderLayout.NORTH);

        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(4, 4));

        String[] buttonLabels = {
            "7", "8", "9", "/",
            "4", "5", "6", "*",
            "1", "2", "3", "-",
            "0", "C", "=", "+"
        };

        for (String label : buttonLabels) {
            JButton button = new JButton(label);
            button.addActionListener(this);
            panel.add(button);
        }

        add(panel, BorderLayout.CENTER);
    }

    public void actionPerformed(ActionEvent e) {
        String command = e.getActionCommand();
        
        if (command.matches("[0-9]")) {
            textField.setText(textField.getText() + command);
        } else if (command.equals("C")) {
            textField.setText("");
            num1 = num2 = result = 0;
        } else if (command.equals("=")) {
            num2 = Double.parseDouble(textField.getText());
            switch (operator) {
                case 1:
                    result = num1 + num2;
                    break;
                case 2:
                    result = num1 - num2;
                    break;
                case 3:
                    result = num1 * num2;
                    break;
                case 4:
                    if (num2 != 0)
                        result = num1 / num2;
                    else
                        textField.setText("Cannot divide by zero!");
                    break;
            }
            textField.setText(Double.toString(result));
        } else if (command.equals("+")) {
            num1 = Double.parseDouble(textField.getText());
            textField.setText("");
            operator = 1;
        } else if (command.equals("-")) {
            num1 = Double.parseDouble(textField.getText());
            textField.setText("");
            operator = 2;
        } else if (command.equals("*")) {
            num1 = Double.parseDouble(textField.getText());
            textField.setText("");
            operator = 3;
        } else if (command.equals("/")) {
            num1 = Double.parseDouble(textField.getText());
            textField.setText("");
            operator = 4;
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            CalculatorGUI calc = new CalculatorGUI();
            calc.setVisible(true);
        });
    }
}

