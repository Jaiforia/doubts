import java.util.*;
class IP{
	public static void main(String args[])
	{
		String ip;
		int dot=0;
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the IP address");
		ip=in.next();
		for(int i=0;i<ip.length();i++)
		{
			if(ip.charAt(i)=='.')
				dot++;
		}
		System.out.println(ip.charAt(0));
		if((ip.length()>15) || (dot!=3) || (ip.charAt(0)>2))
			System.out.println("IP Address does not exist.");
		else
		{
			if((ip.charAt(0)==2 && ip.charAt(1)>5)||(ip.charAt(0)==2 && ip.charAt(1)==5 && ip.charAt(2)>5)||(ip.charAt(0)=='-'))
				System.out.println("IP Address does not exist.");
			else 
				check(ip);
		}
	}
	public static void check(String ip)
	{
		int i=0,dec=0,k=1,count=7;
		int a[]=new int[8];
		while(ip.charAt(i)!='.')
		{
			i++;
		}
		if(i>3)
			System.out.println("IP Address does not exist.");
		else
		{
			i=i-1;
			// Extracting the decimal from string
			while(i>=0)
			{
				dec=dec+(ip.charAt(i)-'0')*k;
				k=k*10;
				i--;
			}
			// conversion of decimal to binary.
			while(count>=0)
			{
				a[count]=dec%2;
				dec=dec/2;
				count--;
			}
			if(a[0]==0)
				System.out.println("IP Address belong to class A");
			else if(a[1]==0)
					System.out.println("IP Address belong to class B");
				 else if(a[2]==0)
						 System.out.println("IP Address belong to class C");
					  else if(a[3]==0)
							  System.out.println("IP Address belong to class D");
						   else 
								  System.out.println("IP Address belong to class E");
		}
	}
}
