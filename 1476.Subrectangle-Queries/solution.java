public class solution {
    class SubrectangleQueries {
        private int[][] _rectangle;

        public SubrectangleQueries(int[][] rectangle) {
            _rectangle = rectangle;
        }

        public void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
            for (int i = row1; i <= row2; i++) {
                for (int j = col1; j <= col2; j++) {
                    _rectangle[i][j] = newValue;
                }
            }
        }

        public int getValue(int row, int col) {
            return _rectangle[row][col];
        }

        public void printRectangle() {
            for (int i = 0; i < _rectangle.length; i++) {
                for (int j = 0; j < _rectangle[0].length; j++) {
                    System.out.print(_rectangle[i][j] + " ");
                }
                System.out.println();
            }
        }
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[][] rectangle = new int[][] { { 1, 2, 1 }, { 4, 3, 4 }, { 3, 2, 1 }, { 1, 1, 1 } };
        SubrectangleQueries Rectangle = s.new SubrectangleQueries(rectangle);
        Rectangle.printRectangle();

        System.out.println();
        Rectangle.updateSubrectangle(0, 0, 2, 2, 5);
        Rectangle.printRectangle();
    }
}
