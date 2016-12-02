import java.io.*;
import java.util.*;
import java.math.*;
import java.lang.*;
public class RayThroughGlasses
{
    static BigInteger[] fibs = new BigInteger[1005];
    public static void main(String[] args)throws IOException
    {
        //System.setIn(new FileInputStream(new File("1in.txt")));
        //System.setOut(new PrintStream(new File("1out.txt")));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        fibs[0] = BigInteger.ONE;
        fibs[1] = BigInteger.valueOf(2);
//        preprocess(1001);
        for(int i = 2; i < 1004; i++)
        {
            fibs[i] = fibs[i-1].add(fibs[i-2]);
        }
        String x;
        StringBuilder sb = new StringBuilder("");
        while((x = br.readLine()) != null && x.length()!=0)
        {
            sb.append(fibs[Integer.parseInt(x)]);
            sb.append("\n");
        }
        System.out.print(sb);
    }
//    private static BigInteger preprocess(int i)
//    {
//        if(fibs[i] != null)
//            return fibs[i];
//        fibs[i] = preprocess(i - 1).add(preprocess(i - 2));
//        return fibs[i];
//    }
}