//modify cout line of this code for coding ninjas platform solution 
//That's most Simlple and Amazing Algortihm

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Write your code here
    if(n==0)
    {
        return;
    }
    if(n==1)
    {
        cout<<"Move Disc "<<n<<" from "<<source<<" to "<<destination<<endl;
        return;
    }
    towerOfHanoi(n-1,source,destination,auxiliary);
    cout<<"Move Disc "<<n<<" from "<<source<<" to "<<destination<<endl;
    towerOfHanoi(n-1,auxiliary,source,destination);
}

int main()
{
    int n;
    cin>>n;
    towerOfHanoi(n,'A','B','C');
}
