using System.IO;

public class TextStream {
    public static void write(object[] objs, TextWriter outStream) {
        foreach (object obj in objs) {
            outStream.WriteLine("{0}", obj.ToString());
        }
    }
}