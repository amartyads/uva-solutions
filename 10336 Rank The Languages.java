import java.io.*;
import java.util.*;
class RankTheLanguages
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tcases = Integer.parseInt(br.readLine());
        int tc = tcases;
        while(tcases-- > 0)
        {
            String[] stuff = br.readLine().split(" ");
            int rowNo = Integer.parseInt(stuff[0]);
            int colNo = Integer.parseInt(stuff[1]);
            char[][] map = new char[rowNo + 2][colNo + 2];
            boolean[][] visited = new boolean[map.length][map[0].length];
            for(int i = 0; i < map[0].length; i++)
            {
                map[0][i] = '0';
                map[map.length - 1][i] = '0';
                visited[0][i] = true;
                visited[map.length - 1][i] = true;
            }
            for(int i = 0; i < map.length; i++)
            {
                map[i][0] = '0';
                map[i][map[0].length - 1] = '0';
                visited[i][0] = true;
                visited[i][map[0].length - 1] = true;
            }
            for(int i = 1; i < map.length - 1; i++)
            {
                map[i] = ("0" + br.readLine()+ "0").toCharArray();
            }
            HashMap languages = new HashMap();
            
            Queue<Coord> q = new ArrayDeque<>();
            for(int i = 1; i < map.length - 1; i++)
            {
                for(int j = 1; j < map[0].length - 1; j++)
                {
                    if(!visited[i][j])
                    {
                        int ct;
                        try
                        {
                            ct = (int)languages.get(map[i][j]) + 1;
                        }
                        catch(Exception e)
                        {
                            ct = 1;
                        }
                        languages.put(map[i][j], ct);
                        q.add(new Coord(i,j));
                        visited[i][j] = true;
                        while(!q.isEmpty())
                        {
                            Coord n = q.remove();
                            for(int k = -1; k <= 1; k++)
                            {
                                if(map[n.x][n.y] == map[n.x + k][n.y] && !visited[n.x + k][n.y])
                                {
                                    visited[n.x + k][n.y] = true;
                                    q.add(new Coord(n.x + k,n.y));
                                }
                            }
                            for(int k = -1; k <= 1; k++)
                            {
                                if(map[n.x][n.y] == map[n.x][n.y + k] && !visited[n.x][n.y + k])
                                {
                                    visited[n.x][n.y + k] = true;
                                    q.add(new Coord(n.x,n.y + k));
                                }
                            }
                        }
                        q = new ArrayDeque<>();
                    }
                }
            }
            System.out.println("World #"+(tc - tcases));
            Set set = languages.entrySet();
            Iterator i = set.iterator();
            ArrayList<langMap> mm = new ArrayList<langMap>();
            while(i.hasNext()) {
               Map.Entry me = (Map.Entry)i.next();
               mm.add(new langMap((char)me.getKey(),(int)me.getValue()));
            }
            Collections.sort(mm);
            for(langMap temp:mm)
            {
                System.out.println(temp.lang + ": " + temp.reg);
            }
        }
    }
}