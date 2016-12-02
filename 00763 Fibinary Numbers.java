import java.io.*;
import java.util.*;
import java.math.*;
import java.lang.*;
public class FibinaryNumbers
{
    static BigInteger[] fibs = new BigInteger[110];
    public static void main(String[] args)throws IOException
    {
//        System.setIn(new FileInputStream(new File("1in.txt")));
//        System.setOut(new PrintStream(new File("1out.txt")));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        fibs[0] = BigInteger.ONE;
        fibs[1] = BigInteger.ONE;
        preprocess(109);
        String s1,s2;
        StringBuilder s3 = new StringBuilder("");
        BigInteger n1,n2,sum;
//        for (int i = 0; i < 20; i++)
//            System.out.println(fibs[i]);
        boolean first = true;
        while((s1 = br.readLine()) != null && s1.length() != 0)
        {
            if(first)   first = false;
            else s3.append("\n\n");
            s2 = br.readLine();
            n1 = BigInteger.ZERO;
            n2 = BigInteger.ZERO;
            for(int i = 0; i < s1.length(); i++)
            {
                if (s1.charAt(i) == '1')
                    n1 = n1.add(fibs[s1.length()-i]);
            }
            for(int i = 0; i < s2.length(); i++)
            {
                if (s2.charAt(i) == '1')
                    n2 = n2.add(fibs[s2.length()-i]);
            }
//            System.out.println(n1 + " " + n2);
            sum = n1.add(n2);
            boolean hit = false;
            for(int i = 109; i > 0; i--)
            {
                if(sum.compareTo(fibs[i]) >= 0)
                {
                    hit = true;
                    s3.append("1");
                    sum = sum.subtract(fibs[i]);
                }
                else if(hit)
                {
                    s3.append("0");
                }
            }
            if(s1.equals("0") && s2.equals("0"))
            {
                s3.append("0");
            }
//            s3.append("\n");
            s2 = br.readLine();
        }
        System.out.println(s3);
    }

    private static BigInteger preprocess(int i)
    {
        if(fibs[i] != null)
            return fibs[i];
        fibs[i] = preprocess(i - 1).add(preprocess(i - 2));
        return fibs[i];
    }
}