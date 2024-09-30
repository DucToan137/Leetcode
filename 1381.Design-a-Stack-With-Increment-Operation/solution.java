public class solution {
    public class CustomStack {

        public int[] stack;
        public int maxSize;
        public int top;

        public CustomStack(int maxSize) {
            stack = new int[maxSize];
            this.maxSize = maxSize;
            top = -1;
        }

        public void push(int x) {
            if (top == maxSize - 1) {
                return;
            }
            stack[++top] = x;
        }

        public int pop() {
            if (top == -1) {
                return -1;
            }
            return stack[top--];
        }

        public void increment(int k, int val) {
            int minK = Math.min(k, top + 1);
            for (int i = 0; i < minK; i++) {
                stack[i] += val;
            }
        }
    }

    public static void main(String[] args) {
        solution sol = new solution();
        CustomStack customStack = sol.new CustomStack(3);
        customStack.push(1);
        customStack.push(2);
        System.out.println(customStack.pop());
    }
}
