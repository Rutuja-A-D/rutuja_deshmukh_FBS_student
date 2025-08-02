package assingments0;

public class Q10 {
	//five subject marks and find totmark and calculate percentage
	public static void main(String[]args)
	{
		int sub1=45,sub2=85,sub3=55,sub4=51,sub5=54;
		int totmark, per;
		totmark=sub1+sub2+sub3+sub4+sub5;
		per=totmark/5;
		System.out.printf("total marks =%d\n",totmark);
		System.out.printf("percentage=%d",per);
	}

}
