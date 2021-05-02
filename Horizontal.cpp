//Fungsi Mencari Kata
int searchwords (char *(input))
{
	int p_kt, cek, ketemu;
	ketemu = 0;
	p_kt = strlen (input);
	
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
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
	
	if (ketemu > 0)
	{
		cout << "ADA" << endl;
 	}
 	else
 	{
 		cout << "TIDAK ADA" << endl;
	}
}
