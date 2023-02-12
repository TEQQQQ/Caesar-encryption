#include <iostream>
using namespace std;
int main()
{
    string msg;
    cout << "Message can only be alphabetic" << endl;
    cout << "Enter message: ";
    cin>>msg;
    int key;
    cout << "Enter key (0-25): ";
    cin >> key;
        
	
    string encryptedText = msg;

    for (int i = 0; i < msg.size(); i ++){

        if(msg[i]==32){
            continue; 
        } else {

            if((msg[i]+key) > 122) {
                 
                int temp = (msg[i] + key) - 122;
                encryptedText[i] = 96 + temp;
            } else if (msg[i] + key > 90 && msg[i] <= 96){
                
                int temp = (msg[i] + key) - 90;
                encryptedText[i] = 64 + temp;
            } else {
                
                encryptedText[i] += key;
            }

        }
    
	}
	cout << "Encrypted Message: " << encryptedText;
  

    return 0;

}
