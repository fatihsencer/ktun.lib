import java.util.Scanner;

enum Currency{
	
	DOLLAR(5),
	EURO(6),
	GOLD(277);
	
	private final int value;
	
	Currency(int newValue){
		this.value=newValue;
	}
	
	public int getValue(){
		return value;
	}
} 

public class enum1{

	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		System.out.print("How much: ");
		int money=sc.nextInt();
		System.out.print("1--> DOLLAR\n2-->EURO\n3-->Gold\nTL to ... : ");
		int select = sc.nextInt();
		
		if(select==1){
			Currency d = Currency.DOLLAR;
			int value=d.getValue();
			int total=money*value;
			System.out.print(total);
		}
		else if(select==2){
			Currency d = Currency.EURO;
			int value=d.getValue();
			int total=money*value;
			System.out.print(total);
		}
		else{
			Currency d = Currency.GOLD;
			int value=d.getValue();
			int total=money*value;
			System.out.print(total);
	}
		
		
	}
	
	
	
}