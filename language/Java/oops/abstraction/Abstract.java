class Abstract
{
	public static void main(String[] args) {
		A ob=new B();
		ob.a();
	}
}

abstract class A
{
	abstract void a();
		//System.out.println("hello a");
}

class B extends A
{
	void a()
	{
		System.out.println("hello");
	}
}