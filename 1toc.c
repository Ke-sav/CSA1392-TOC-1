Add(a, b)
using System;
 
class GFG
{
 
static void Main(String[] args)
{
    int max = 1 + new Random().Next()*10 % 15;
    int i = 0;
    while (i < max)
    {
        char c = (char) ('a' + new Random().Next()*10 % 2);
        Console.Write(c + " ");
        i++;
        if (c == 'a')
        {
            if (i == max)
                Console.Write("YES\n");
 
            while (i < max)
            {
                c = (char) ('a' + new Random().Next()*10 % 2);
                Console.Write(c + " ");
                i++;
                if (c == 'a' && i == max)
                {
                    Console.Write("\nYES\n");
                }
                else if (i == max)
                {
                    Console.Write("\nNO\n");
                }
            }
        }
        else
        {
            while (i < max)
            {
                c = (char) ('a' + new Random().Next()*10 % 2);
                Console.Write(c + " ");
                i++;
            }
            Console.Write("\nNO\n");
        }
    }
}
}
