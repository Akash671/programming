class tmp
{
	int a=10;
	public static void main(String[] args) {
		B ob=new B();
		//System.out.println(ob.eat());
		//System.out.println(ob.a);
		ob.dog();
		ob.eat();
	}
}

class B extends A
{
	void dog()
	{
		System.out.println("hello java 2");
	}
}

class A
{
	void eat()
	{
		System.out.println("hello java");
	}
}
