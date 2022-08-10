class Tv {
	String colro;
	boolean power;
	int channel;

	void power()		{power = !power;}
	void channelUp()	{	++channel;	}
	void channelDown()	{	--channel;	}
}

class TvTest2{
	public static void main(String[]args){
		Tv t1 = new Tv();
		Tv t2 = new Tv();
		
		System.out.println("Channel value of t1 is " + t1.channel + ".");
		System.out.println("Channel value of t2 is " + t2.channel + ".");

		t1.channel = 7;
		System.out.println("Changed Channel value of t1 to 7.");

		System.out.println("Channel value of t1 is " + t1.channel + ".");
		System.out.println("Channel value of t2 is " + t2.channel + ".");
	}
}
