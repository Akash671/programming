//method overriding in java oops

class Polymorphism
{
	public static void main(String[] args) {
		B ob=new B();
		ob.a();
		//ob.();
		A oba=new A();
		oba.a();
	}
}

class A
{
	void a()
	{
		System.out.println("hello class A");
	}
}


class B extends A
{

	void a()
	{
		System.out.println("hello class B");
	}
}