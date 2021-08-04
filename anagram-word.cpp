//Erhan Guven'in 01.08.2021 tarihli cozumu

int main()
{
    string kelime1, kelime2;

    cin >> kelime1;
    cin >> kelime2;

    if(kelime1.length() != kelime2.length())
    {
        printf("anagram değil");
        return 0;
    }

    sort(kelime1.begin(), kelime1.end());
    sort(kelime2.begin(), kelime2.end());

    for (int i = 0; i < kelime1.length(); i++)
    {
        if(kelime1[i] != kelime2[i]){
            printf("anagram değil");
            return 0;
        }
    }

    printf("anagram");
}
