using System;

namespace Chapter2_CSharp
{
    class OneDArray
    {
        static float[] initArray(int n)
        {
            float[] a;

            a = new float[n];

            for (int i = 0; i < n; i++)
            {
                a[i] = 1 / (1 + i * (float)i);
            }

            return a;
        }

        static void showArray(float [] a)
        {
            for (int i = 0; i < a.Length; i++)
            {
                Console.WriteLine(a[i]);
            }
        }
        static void main(string[] args)
        {
            int n = 10;

            float[] a = initArray(n);

            showArray(a);
        }
    }
}
