import java.util.Scanner;

public class ReJava
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		long n,k;
		n = in.nextLong();
		k = in.nextLong();

		while(k>0)
		{
			if(n%10 == 0)
			{
				n /= 10;
			}
			else
			{
				n -= 1;
			}
			k--;
		}
		System.out.print(n);
	}
}