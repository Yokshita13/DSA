class PrimeCheck {

    static void checkPrime(int num) {
        int count = 0;

        if (num <= 1) {
            System.out.println("Not a Prime Number");
            return;
        }

        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                count++;
            }
        }

        if (count == 2)
            System.out.println("Prime Number");
        else
            System.out.println("Not a Prime Number");
    }

    public static void main(String[] args) {
        int number = 7;
        checkPrime(number);
    }
}
