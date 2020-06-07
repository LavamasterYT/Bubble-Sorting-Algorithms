using System;

namespace BubbleSorting
{
    class Program
    {
        static int[] numbers;

        static Random random;

        static void Main()
        {
            Setup();
            
            WriteArray();

            bool flag = false;
            bool done = false;

            while (!done)
            {
                flag = false;

                for (int i = 0; i < numbers.Length; i++)
                {
                    if (i < numbers.Length - 1)
                    {
                        if (numbers[i] > numbers[i + 1])
                        {
                            flag = true;
                            Swap(i, i + 1);
                        }
                    }
                }

                WriteArray();

                if (!flag)
                {
                    break;
                }
            }

            Console.ReadKey(true);
        }

        static void Setup()
        {
            numbers = new int[30];
            random = new Random();
            for (int i = 0; i < numbers.Length; i++)
            {
                numbers[i] = random.Next(0, 101);
            }
        }

        static void Swap(int index, int sindex)
        {
            int x = numbers[index];
            int y = numbers[sindex];

            numbers[index] = y;
            numbers[sindex] = x;
        }

        static void WriteArray()
        {
            foreach (var i in numbers)
            {
                Console.Write(i + " ");
            }
            Console.Write("\n");
        }
    }
}