#include <iostream>
#include <cstring>
using namespace std;

char words[15][16]   =	{ {'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
			{'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
			{'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
			{'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
			{'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
			{'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
			{'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
			{'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
			{'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
			{'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'},
			{'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
			{'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'},
			{'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'},
			{'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'},
			{'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'} };

//Fungsi Mencari Kata
int searchwords (char *(input))
{
	int p_kt, cek, ketemu;
	ketemu = 0;
	p_kt = strlen (input);
	
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			if (input[0] == words[i][j])
			{
				//HORIZONTAL KANAN
				for (int k = 0; k < p_kt; k++)
				{
					if (input[k] == words[i][j + k])
					{
						cek = k;
					}
					else
					{
						break;
					}
				}
				if (cek == p_kt -1)
				{
					ketemu += 1;
				}
				else
				{
					ketemu += 0;
				}
				cek = 0;
				
				//HORIZONTAL KIRI
				for (int k = 0; k < p_kt; k++)
				{
					if (input[k] == words[i][j-k])
					{
						cek = k;
					}
					else
					{
						break;
					}
				}
				if (cek == p_kt -1)
				{
					ketemu += 1;
				}
				else
				{
					ketemu += 0;
				}
				cek = 0;
				
				//VERTIKAL BAWAH
				for (int k = 0; k < p_kt; k++)
				{
					if(input[k] == words[i + k][j])
					{
						cek = k;
					}
					else
					{
						break;
					}
				}
				if(cek == p_kt - 1)
				{
					ketemu += 1;
				}
				else
				{
					ketemu += 0;
				}
				cek = 0;
				
				//VERTIKAL KE ATAS
				for (int k = 0; k < p_kt; k++)
				{
					if (input[k] == words[i-k][j])
					{
						cek = k;
					}
					else
					{
						break;
					}
				}
				if (cek == p_kt - 1)
				{
					ketemu += 1;
				}
				else
				{
					ketemu += 0;
				}
				cek = 0;	
			}
		}
	}
	
	if (ketemu > 0)
	{
		cout << "Ada" << endl;
 	}
 	else
 	{
 		cout << "Tidak Ada" << endl;
	}
}

int main (){
	int n;
	
	cin >> n;
	char input[n][16];
	
	//Input n Kata
	for (int i = 0; i < n; i++){
		cin >> input[i];
	}
	cout << endl;
		
	//Output n Kata	
	for (int i = 0; i < n; i++){
		searchwords (*(input + i));
	}	
}
