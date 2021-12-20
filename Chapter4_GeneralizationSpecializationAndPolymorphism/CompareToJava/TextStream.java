import java.io.PrintStream;

public class TextStream {
    public static void write(object[] objs, PrintStream outStream) {
        for (int i = 0; i < objs.length; i++) {
            outStream.println(objs[i].toString());
        }
    }
}