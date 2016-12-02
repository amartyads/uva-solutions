import java.io.*;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

class MaximumSubsequenceProduct
{
    public static void main(String args[]) throws IOException
    {
        Scanner sc = new Scanner(System.in);
        String s;
        int inp;
        boolean ghadzero = false, hadZero = false;
        ArrayList<BigInteger> nums = new ArrayList<BigInteger>();
        while((sc.hasNext()))
        {
            nums.clear();
            int n;
            while(true)
            {
                n = sc.nextInt();
                if(n == -999999) break;
                nums.add(BigInteger.valueOf(n));
            }
            BigInteger max = BigInteger.valueOf(n);
            BigInteger sofar = BigInteger.ONE;
            for(int i = 0; i < nums.size();i++)
            {
                for(int j = i; j < nums.size();j++)
                {
                    sofar = sofar.multiply(nums.get(j));
                    max = max.max(sofar);
                }
                sofar = BigInteger.ONE;
            }
            System.out.println(max);
        }
    }
}