import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int lilysHomework(int[] arr) {
        int count=0,l=arr.length;
        int[] sorted=new int[l];
        quick(sorted,0,l-1);
        for(int i=0;i<l;i++)
        {
            int j=i;
            while(j<l)
            {
                if(arr[j]==sorted[i])
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    count++;
                }
                else
                {
                   j++; 
                }
            }
        }
        return count;
    }
    static void quick(int a[],int b,int c)
    {
        int p;
        if(b<c)
        {
            p=Partition(a,b,c);
            quick(a,b,p-1);
            quick(a,p+1,c);
        }
    }
    static int Partition(int b[],int l,int r)
    {
        int i=l,j=r,t,X=b[i];
        while(i<j)
        {
            while((b[i]<=X)&&(i<=r))
                i++;
            while(b[j]>X)
                j--;
            if(i<j)
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
        t=b[j];
        b[j]=b[l];
        b[l]=t;
        return j;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int arr_i = 0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        int result = lilysHomework(arr);
        System.out.println(result);
        in.close();
    }
}
