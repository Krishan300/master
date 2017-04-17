public class Person {

    private String firstName;
    private String lastName;
    int age;    
    public Person(String firstName, String lastName, int age) {
	this.setFirstName(firstName);
        this.setLastName(lastName);
        this.age(age);

    }


    public void setFirstName(String firstname) throws IllegalArgumentException     {
	if(firstName.isEmpty()) throw new IllegalArgumentException("Can't pass empty first name");
        this.firstName=firstName;



    }

    public void setLastName(String lastName) {
	if(lastName.isEmpty())
	    throw new IllegalArgumentException("Can't pass empty last name");
	this.lastName=lastName;
    }
}