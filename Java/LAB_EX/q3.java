abstract class Account{
    protected double balance;

    public Account(double balance){
        this.balance = balance;
    }

    public double getBalance() {
        return balance;
    }

    public abstract void addInterest();
}

class SavingsAccount extends Account{
    private double interestRate;
    public SavingsAccount(double balance, double interestRate){
        super(balance);
        interestRate = this.interestRate;
    }

    @Override
    public void addInterest(){
        double interest = balance * interestRate/100;
        balance += interest;
        System.out.println("Interest added: "+interestRate);
    }
}

class CurrentAccount extends Account{
    private double interestRate;
    public CurrentAccount(double balance, double interestRate){
        super(balance);
        this.interestRate = interestRate;
    }

    @Override
    public void addInterest(){
        double interest = balance * interestRate/100;
        balance += interest;
        System.out.println("Interest: "+interest);
    }
}

public class q3 {
    
}
