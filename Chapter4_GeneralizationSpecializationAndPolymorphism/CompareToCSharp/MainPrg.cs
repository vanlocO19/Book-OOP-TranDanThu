using System;

class MainPrg {
    static void Main() {
        object[] objs = {new Rectangle(6, 7), new Square(8)};
        TextStream.write(objs, Console.Out);
    }
}