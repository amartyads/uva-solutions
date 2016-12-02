/**
 * Created by Amartya on 08-Oct-16.
 */
import java.io.*;
import java.util.GregorianCalendar;
public class Y3KProblem
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader((System.in)));
        GregorianCalendar g;
        while(true)
        {
            String[] inp = br.readLine().split(" ");
            int add = Integer.parseInt(inp[0]);
            int dd = Integer.parseInt(inp[1]);
            int mm = Integer.parseInt(inp[2]);
            int yy = Integer.parseInt(inp[3]);
            if(add == 0 && dd == 0 && mm == 0 && yy == 0) break;
            g = new GregorianCalendar(yy,mm-1,dd);
            g.add((GregorianCalendar.DATE),add);
            System.out.println(g.get(GregorianCalendar.DAY_OF_MONTH)+" " + (g.get(GregorianCalendar.MONTH)+1)+" "+g.get(GregorianCalendar.YEAR));
        }
    }
}
