import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;


    /*
     * Complete the 'dynamicArray' function below.
     *
     * The function is expected to return an INTEGER_ARRAY.
     * The function accepts following parameters:
     *  1. INTEGER n
     *  2. 2D_INTEGER_ARRAY queries
     */
public class DynamicArray{
       List<List<Integer>> seqlist=new ArrayList<List<Integer>>();
       List<Integer> seq=new ArrayList<Integer>();
       int lastAns=0;
       DynamicArray(int N){
           for(int i=0;i<N;i++){
               seq=new ArrayList<Integer>();
               seqlist.add(seq);
           }
       }
       void appendValue(int x,int y,int N){
           int rowIndex=(x^lastAns)%N;
           List<Integer> seq = seqlist.get(rowIndex);
           seq.add(y);
       }
       void printValue(int x,int y,int N){
           int colmnIndex=0;
           int rowIndex=(x^lastAns)%N;
           List<Integer> seq=seqlist.get(rowIndex);
           colmnIndex=y%seq.size();
           lastAns=seq.get(colmnIndex);
           System.out.println(lastAns);
       }

public static void main(String[] args){
    int Q,N;
    Scanner s=new Scanner(System.in);
    N=s.nextInt();
    Q=s.nextInt();
    DynamicArray da=new DynamicArray(N);
    for(int i=0;i<Q;i++){
        int qType=s.nextInt();
        int x=s.nextInt();
        int y=s.nextInt();
        if(qType==1){
            da.appendValue(x,y,N);
        }
        else{
            da.printValue(x,y,N);
        }
    }
    s.close();
}
}
