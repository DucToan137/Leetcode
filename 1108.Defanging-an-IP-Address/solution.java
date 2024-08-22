public class solution {
    public String defangIPaddr(String address) {
        StringBuilder s = new StringBuilder();
        for (int i = 0; i < address.length(); i++) {
            if (address.charAt(i) != '.') {
                s.append(address.charAt(i));
            } else {
                s.append('[');
                s.append(address.charAt(i));
                s.append(']');
            }
        }
        return s.toString();
    }

    public static void main(String[] args) {
        String address = "1.1.1.1";
        solution sol = new solution();
        System.out.println(sol.defangIPaddr(address));
    }
}
