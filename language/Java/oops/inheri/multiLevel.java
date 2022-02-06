//multilevel inheritance


class multiLevel 
{
	public static void main(String[] args) {
		Babydog ob=new Babydog();
		ob.weep();
		ob.bark();
		ob.eat();
	}
}
// ^
// |
class Babydog extends Dog
{
	void weep()
	{
		System.out.println("baby dog weeping");
	}
}
// ^
// |
class Dog extends Animal
{
	void bark()
	{
		System.out.println("dog bark ");
	}
}
// ^
// |
class Animal
{
	void eat()
	{
		System.out.println("dog eat");
	}
}

