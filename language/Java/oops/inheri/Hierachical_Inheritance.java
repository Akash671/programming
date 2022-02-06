//Hierachical Inheritance

class Hierachical_Inheritance
{
	public static void main(String[] args) {
		C ob=new C();
		ob.a();
		//ob.b();
		ob.c();
		B ob2=new  B();
		ob2.b();
		ob2.a();
	}
}	


class A
{
	void a()
	{
		System.out.println("hello a");
	}
}

class B extends A
{
	void b()
	{
		System.out.println("hello b");
	}
}

class C extends A
{
	void c()
	{
		System.out.println("hello c");
	}
}