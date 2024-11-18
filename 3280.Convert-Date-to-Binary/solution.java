public class solution {
    public String convertBinary(int num) {
        String binary = "";
        while (num > 0) {
            binary = num % 2 + binary;
            num = num / 2;
        }
        return binary;
    }

    public String convertDateToBinary(String date) {
        String[] dateArray = date.split("-");
        int year = Integer.parseInt(dateArray[0]);
        int month = Integer.parseInt(dateArray[1]);
        int day = Integer.parseInt(dateArray[2]);

        String binaryYear = convertBinary(year);
        String binaryMonth = convertBinary(month);
        String binaryDay = convertBinary(day);

        return binaryYear + "-" + binaryMonth + "-" + binaryDay;
    }

    public static void main(String[] args) {
        solution s = new solution();
        System.out.println(s.convertDateToBinary("2020-10-10"));
    }
}
