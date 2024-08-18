#include<iostream>
#include<string>
using namespace std;



class Person{
	
 private:
 	
	string name;
	int age;
	string gender;
	long contactno;
 
 public:
 /*	Person(string name1, int age1,string gender1, int contactno1) {
 		
 		name=name1;
 		age=age1;
 		gender=gender1;
 		contactno=contactno1;
	 }*/
	 
	 //declare data functions for information
void putinfo(){
	
	cout<<"\nEnter Your Name:\t";
	cin>>name;
	cout<<"******************"<<endl;
	cout<<"Enter Your Age :\t ";
	cin>>age;
	cout<<"******************"<<endl;
	cout<<"Enter Gender:\t";
	cin>>gender;
	cout<<"******************"<<endl;
	cout<<"Enter Your Active Contact Number:\t ";
	cin>>contactno;
	cout<<"******************"<<endl;
}
//declare data function for display the information
void displayinfo(){
	
	cout<<"NAME:\t"<<name<<endl;
	cout<<"AGE:\t"<<age<<endl; 
	cout<<"GENDER:\t"<<gender<<endl;
	cout<<"CONTACT NUMBER:\t"<<contactno<<endl;
	cout<<endl;
	cout<<"******************"<<endl;
	cout<<"******************"<<endl;
}
};
//here student inherit with the person class

class Student : public Person{
	
	private:
//we declare the data members of student class		
	
	string studentid;
	string guardianname;
	
	public:
//member function
		
void puttinfo() {
		cout<<"Enter Your Student ID:\t";
	cin>>studentid;
	cout<<"******************"<<endl;

	cout<<"Enter Your Guardian Name:\t";
	cin>>guardianname;
	cout<<"******************"<<endl;
}
//member function
void abcd() {
	cout<<"STUDENT ID:    "<<studentid<<endl;
//	cout<<"ROOM NUMBER:    "<<roomnumber<<endl;
	cout<<"GUARDIAN NAME:    "<<guardianname<<endl;
		cout<<endl;
	cout<<"******************"<<endl;
	cout<<"******************"<<endl;
	
}		
	
};
class Staff: public Person{
	private:
		string staffid;
		string department;
	public:
	     void instaff(){
	     	cout<<"Enter Staff ID:\t";
	     	cin>>staffid;
	     		cout<<"******************"<<endl;
	     	cout<<"Enter Your Department:\t";
	     	cin>>department;
	     		cout<<"******************"<<endl;
		 }	
		void outstaff(){
			cout<<"Staff ID:"<<staffid<<endl;
			cout<<"Department:"<<department<<endl;
	cout<<"******************"<<endl;
	cout<<"******************"<<endl;	
		} 
	
	
	
};
class Visitor : public Person{
	private:
		long ID;
		string address;
		string purpose;
	public:
	    void invisitor(){
	    	
	    	cout<<"Enter Your ID-(Given By Hostel):\t";
	    	cin>>ID;
	    		cout<<"******************"<<endl;
	    	cout<<"Enter Your City of Residence: \t";
	    	cin>>address;
	    		cout<<"******************"<<endl;
	    	cout<<"Enter Your Entry Purpose: \t";
	    	cin>>purpose;
				cout<<"******************"<<endl;
	}
		void outvisitor(){
			cout<<"ID:"<<ID<<endl;
			cout<<"Home Address:"<<address<<endl;
			cout<<"Purpose:"<<purpose<<endl;
	cout<<"******************"<<endl;
	cout<<"******************"<<endl;
		}
	
	
	
};
class Room{
	private:
		
	   int roomNumber;
       string roomType;
       int capacity;
       int occupants=0;
       
    public:
    	void puutroom() {
    		cout<<"Enter The Room Number:\t";
    		cin>>roomNumber;
    		cout<<"******************"<<endl;
    		cout<<"Enter The Room Type:\t";
    		cin>>roomType;
    		cout<<"******************"<<endl;
    		cout<< "Enter The Capacity:\t";
    		cin>>capacity;
			cout<<"******************"<<endl;
		}
		
    	void addoccupants() {
		
    	if(occupants<capacity){
    		
    		occupants++;
    		cout << "Occupant added to room " << roomNumber << endl;
    		
		}
		else {
            cout << "Room " << roomNumber << " is already full" << endl;
        }
}
      
	void displayroom() {
		cout<<"Room Number:\t"<<roomNumber<<endl;
		cout<<"Room Type:\t"<<roomType<<endl;
		cout<<"Capacity:\t"<<capacity<<endl;
		cout<<"Occupants:\t"<<occupants<<endl ;
		cout<<"******************"<<endl;
		cout<<"******************"<<endl;
	}
	
};
class Manager: public Staff{
	
	
	public:
	
	
	void displaymanager() {
		cout<<"Name:\tAli"<<endl;
		cout<<"Contact Number:\t0300000000"<<endl;
		cout<<"Timming:\t8AM to 7PM"<<endl;
	}
};

class MenReq {
private:
    string requestId;
    string description;
    int status;

public:
    
    MenReq() {}


    void setRequestId(const string& newRequestId) {
        requestId = newRequestId;
    }

    void setDescription(const string& newDescription) {
        description = newDescription;
    }

    void setStatus(int newStatus) {
        // Ensure status is either 0 or 1
        if (newStatus == 0 || newStatus == 1) {
            status = newStatus;
        } else {
            cout << "Invalid status value. Setting status to pending (1)." << endl;
            status = 1;
        }
    }

    
    string getRequestId() const {
        return requestId;
    }

    string getDescription() const {
        return description;
    }

    string getStatus() const {
        return (status == 0 ? "Completed" : "Pending");
    }

    void displayRequest() {
        cout << "\nEnter Your RequestId: ";
        cin >> requestId;
        cout << "Enter Your Problem: ";
        cin>>description;
        cout << "Status: " << getStatus() << endl;
    }
};
class Mess {
private:
    string menu;
    string type;
    int time;
    int dish;

public:
    
    Mess() {}

    
    void setMenu(const string& newMenu) {
        menu = newMenu;
    }

    void setType(const string& newType) {
        type = newType;
    }

    void setTime(int newTime) {
        time = newTime;
    }

    void setDish(int newDish) {
        dish = newDish;
    }

    
    string getMenu() const {
        return menu;
    }

    string getType() const {
        return type;
    }

    int getTime() const {
        return time;
    }

    int getDish() const {
        return dish;
    }

    void displayTime() {
        cout << "\n__________Mess Timing__________" << endl;
        cout << "----------Breakfast Time === 7:00 AM to 9:00 AM----------" << endl;
        cout << "----------Lunch Time === 1:00 PM to 3:00 PM----------" << endl;
        cout << "----------Dinner Time === 8:00 PM to 10:00 PM----------" << endl;
    }

    void displayMenu() {
        cout << "Hostel Mess Menu" << endl;
        cout << "----------------" << endl;
        cout << "1-Monday:     Pasta" << endl;
        cout << "2-Tuesday:    Biryani" << endl;
        cout << "3-Wednesday:  Sandwich" << endl;
        cout << "4-Thursday:   Pizza" << endl;
        cout << "5-Friday:     Noodles" << endl;
        cout << "6-Saturday:   Chicken Curry" << endl;
        cout << "7-Sunday:     Rice and Dal" << endl;
        cout << "----------------" << endl;
    }

    void menuSelection() {
        cout << "Select Your Dish: ";
        cin >> dish;
        switch (dish) {
            case 1:
                menu = "Pasta";
                break;
            case 2:
                menu = "Biryani";
                break;
            case 3:
                menu = "Sandwich";
                break;
            case 4:
                menu = "Pizza";
                break;
            case 5:
                menu = "Noodles";
                break;
            case 6:
                menu = "Chicken Curry";
                break;
            case 7:
                menu = "Rice and Dal";
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    }
};
class Warden : public Person{
	private:
     string j;
public:

    void markAttendance() {
        
        
        cout << "Attendance marked for Warden " <<  endl;
        cout<<"Enter P for present anb A for absent:\t";
        
        cin>>j;
        if (j=="P"){
        	cout<<"Warden is present today";
        
		}
		else if(j=="A"){
			cout<<"Warden is on leave";
		}
		else{
			cout<<"invalid statement";
		}
}
};
class TravelService {
private:
    string name;
    string distance;
    int price;

public:
    
    TravelService() {}

    
    void setName(const string& newName) {
        name = newName;
    }

    void setDistance(const string& newDistance) {
        distance = newDistance;
    }

    void setPrice(int newPrice) {
        price = newPrice;
    }

    
    string getName() const {
        return name;
    }

    string getDistance() const {
        return distance;
    }

    int getPrice() const {
        return price;
    }


    void putTravel() {
        cout << "Enter Your Name: ";
        cin >> name;
        cout << "Enter Your Distance: ";
        cin >> distance;
        cout << "Enter Your Price For Ticket: ";
        cin >> price;
    }

    
    void displayTravel() {
        cout << "Bus Ticket Reservation Done For " << name << " To " << distance << " In Rs." << price << endl;
    }
};



int main() {
	//this is person class
 //    Person obj1;
//	obj1.putinfo();
//	obj1.displayinfo();
	
	//this is student class
cout << "\n\n\t\t\t";
    for(int i=0; i<59; i++)
    {
        cout << "*";
    }
    cout << "\n";
    cout << "\t\t\t*\t\t\t\t\t\t\t  *                    \n";
    cout << "\t\t\t*\t\t\tWELCOME\t\t\t\t  *             \n";
    cout << "\t\t\t*\t\tHostel Management System\t\t  *  \n";
    cout << "\t\t\t*\t\t\t\t\t\t\t  *                    \n";
    cout << "\t\t\t";
    for(int i=0; i<59; i++)
    {
        cout << "*";
    }
    cout << "\n";
    system("pause");
    system("cls");
    
    string log;
    string pass;
    
	cout<<"\t\t\t*********************  LOGIN  ********************"<<endl;
	cout<<"Enter Your ID:\t";
	cin>>log;
    
	cout<<"Password:\t";
    cin>>pass;
    cout<<endl;
    
    if(pass=="4173")
    {
	
	int x;
	cout<<"----Press 1 For Student Port \n----Press 2 For Staff   Port \n----Press 3 For Visitor Port \n----Press 4 For Warden  Port :\t";
	cin>>x;
	Student obj2;

	if(x==1){
	
	obj2.putinfo();
	obj2.displayinfo();
	obj2.puttinfo();
	obj2.abcd();
		
		Room obj5;
	
	obj5.puutroom();
	obj5.addoccupants();
	obj5.displayroom();
	int ab;
	cout<<"\nEnter 1 For Transport Booking And 0 For Not Interested:\t";
	cin>>ab;
	if(ab==1) {
			TravelService serve;
			serve.putTravel();
			serve.displayTravel();
	}
	else if(ab==0){
		cout<<"\nYou Are Not Interested"<<endl;
	}
	int ba;
	cout<<"\nEnter 2 For Mess And 0 For Not Interested:\t";
	cin>>ba;
	if(ba==2){
			Mess mess;
			int m;
			mess.displayTime();
			mess.displayMenu();
			cout<<"Press 11 For Selection: ";
			cin>>m;
			cout<<endl;
			if(m==11){
				mess.menuSelection();
			}
			 cout << "Selected Dish: " << mess.getMenu() << endl;
	}
	else if(ba==0){
		cout<<"\nYou are not interested"<<endl;
	}
	int bc;
	cout<<"\nEnter 3 for maintainance Request and 0 for not:\t";
	cin>>bc;
	if(bc==3){
			MenReq App;
			App.displayRequest();
	}
	else if(bc==0){
		cout<<"Thank You";
	}
       }
	//this is staff class
	else if(x==2){
		obj2.putinfo();
		obj2.displayinfo();
	Staff obj3;
		obj3.instaff();
		obj3.outstaff();
	int xy;
	cout<<"\nEnter 1 For Mess and 0 For Not Interested:\t";
	cin>>xy;
	if(xy==1){
			Mess mess;
			int m;
			mess.displayTime();
			mess.displayMenu();
			cout<<"Press 11 For Selection: ";
			cin>>m;
			cout<<endl;
			if(m==11){
				mess.menuSelection();
			}
			 cout << "Selected Dish: " << mess.getMenu() << endl;
		
	}
	else if(xy==0){
		cout<<"You Are Not Interested"<<endl;
	}
	int j;
	cout<<"\nEnter 1 For Manager Information\t";
	cin>>j;
	
	if(j==1){
		Manager obj6;
		obj6.displaymanager();
		
	}
		}
		else if(x==3){
	obj2.putinfo();
	obj2.displayinfo();
		Visitor obj4;
			obj4.invisitor();
			obj4.outvisitor();
		}
else if (x==4){
		obj2.putinfo();
	obj2.displayinfo();
	
	Warden obj9;
	obj9.markAttendance();
	
}
	
		}
		
		else{
			cout<<"Invalid Information";
		}
		
return 0;
} 







