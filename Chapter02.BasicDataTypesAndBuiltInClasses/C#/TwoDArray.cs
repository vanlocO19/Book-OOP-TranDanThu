using System;

namespace Chapter2_CSharp
{
    class TwoDArray
    {
        static void Main(string[] args)
        {
            float[,] a;
            int m = 3, n = 4;

            a = new float[m, n];

            if (a != null)
            {
                for (int i = 0; i < m; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        a[i, j] = i * j;
                        Console.Write(a[i, j]);
                        Console.Write(" ");
                    }
                    Console.WriteLine();
                }
            }
        }
    }
}
