import java.awt.*;

public class q15 {
    private Frame frame;
    private Label nameLabel,genderLabel;
    private TextField nameText;
    private Button submitButton;
    private Choice courseChoice;
    private Checkbox male,female;
    private CheckboxGroup gender;

    public q15(){
        frame = new Frame("Student Registeration Form");
        frame.setLayout(null);
        frame.setSize(500,500);
        frame.setVisible(true);

        nameLabel = new Label("Name");
        nameLabel.setBounds(50, 50, 80, 20);
        frame.add(nameLabel);       

        nameText = new TextField();
        nameText.setBounds(150, 50, 150, 20);
        nameText.setEchoChar('*');
        frame.add(nameText);

        genderLabel = new Label("Gender");
        genderLabel.setBounds(50 ,80, 80, 20);
        frame.add(genderLabel);

        gender = new CheckboxGroup();
        male = new Checkbox("male", gender, false);
        female = new Checkbox("female", gender, false);
        male.setBounds(500,500,80,40);
        female.setBounds(700,500, 80, 40);
        frame.add(male);
        frame.add(female);

    }
    public static void main(String[] args) {
        new q15();
    }
}
