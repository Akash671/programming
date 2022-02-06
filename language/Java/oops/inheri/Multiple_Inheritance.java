//Multiple Inheritance examples

class Multiple_Inheritance extends A,B
{
	public static void main(String[] args) {
		B ob=new B();
		//bo.a();
		ob.b();
	}
}

class A
{
	void a()
	{
		System.out.println("hello a");
	}
}

class B
{
	void b()
	{
		System.out.println("hello b");
	}
}	