/**
 * Created by Amartya on 08-Oct-16.
 */
import java.io.*;
import java.text.SimpleDateFormat;
import java.util.GregorianCalendar;
public class CancerOrScorpio
{
    public static void main(String[] args)throws IOException
    {
        //System.setIn(new FileInputStream(new File("1in.txt")));
        //System.setOut(new PrintStream(new File("1out.txt")));
        String[][] sign = populate();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        GregorianCalendar g;
        int n = Integer.parseInt(br.readLine());
        for(int i = 1; i <= n; i++)
        {
            int inp = Integer.parseInt(br.readLine());
            int yy = inp % 10000;
            inp /= 10000;
            int dd = inp % 100;
            inp /= 100;
            int mm = inp;
            g = new GregorianCalendar(yy,mm-1,dd);
            g.add((GregorianCalendar.WEEK_OF_YEAR),40);
            SimpleDateFormat form = new SimpleDateFormat("MM/dd/yyyy");
            form.setCalendar(g);
            String dateFormatted = form.format(g.getTime());
            System.out.println(i + " " + dateFormatted
                    + " " + sign[(g.get(GregorianCalendar.MONTH)+1)][g.get(GregorianCalendar.DATE)]);
        }
    }
    private static String[][] populate()
    {
        int i;
        String[][] sign = new String[13][33];
        for(i = 1;i <= 31; i++)//jan
        {
            if(i <= 20) sign[1][i] = "capricorn";
            else sign[1][i] = "aquarius";
        }
        for(i = 1;i <= 31; i++)//feb
        {
            if(i <= 19) sign[2][i] = "aquarius";
            else sign[2][i] = "pisces";
        }
        for(i = 1;i <= 31; i++)//mar
        {
            if(i <= 20) sign[3][i] = "pisces";
            else sign[3][i] = "aries";
        }
        for(i = 1;i <= 31; i++)//apr
        {
            if(i <= 20) sign[4][i] = "aries";
            else sign[4][i] = "taurus";
        }
        for(i = 1;i <= 31; i++)//may
        {
            if(i <= 21) sign[5][i] = "taurus";
            else sign[5][i] = "gemini";
        }
        for(i = 1;i <= 31; i++)//jun
        {
            if(i <= 21) sign[6][i] = "gemini";
            else sign[6][i] = "cancer";
        }
        for(i = 1;i <= 31; i++)//jul
        {
            if(i <= 22) sign[7][i] = "cancer";
            else sign[7][i] = "leo";
        }
        for(i = 1;i <= 31; i++)//aug
        {
            if(i <= 21) sign[8][i] = "leo";
            else sign[8][i] = "virgo";
        }
        for(i = 1;i <= 31; i++)//sep
        {
            if(i <= 23) sign[9][i] = "virgo";
            else sign[9][i] = "libra";
        }
        for(i = 1;i <= 31; i++)//oct
        {
            if(i <= 23) sign[10][i] = "libra";
            else sign[10][i] = "scorpio";
        }
        for(i = 1;i <= 31; i++)//nov
        {
            if(i <= 22) sign[11][i] = "scorpio";
            else sign[11][i] = "sagittarius";
        }
        for(i = 1;i <= 31; i++)//dec
        {
            if(i <= 22) sign[12][i] = "sagittarius";
            else sign[12][i] = "capricorn";
        }
        return sign;
    }
}
