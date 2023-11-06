public class q20 {
    public static void main(String[] args) {
        String s = "Hello, World";

        //len
        int len = s.length();
        System.out.println("Length is "+len);

        //toupper tolower
        String u = s.toUpperCase();
        String l = s.toLowerCase();
        System.out.println(u);
        System.out.println(l);

        //substrign
        String sub = s.substring(5);
        System.out.println(sub);

        // indexof
        int i = s.indexOf("World");
        if(i != -1){
            System.out.println( i);
        }else {
            System.out.println("Not exists");
        }

        //replace
        String r = s.replace("Hello", "Hi");
        System.out.println(r);

    }
}