//Q3.Suppose you are given a string containing only english alphabets(Uppercase and Lowercase letter both). You have to display the frequency of each character in lexicographical order.(First print the uppercase followed by lowercase in lexicographical order).

#include<stdio.h>
#include<string.h>
char *ignore_spaces(char*string)
{
	int x=0, y=0;
	while(string[x]){
		if(string[x]!=' ')
		string[y++]=string[x];
		x++;
	}
	string[y]='\0';
	return string;
}
int main() {
	char string[100];
	int i;
	int freq[256]={0};
	gets(string);
	ignore_spaces(string);
	for(i=0;string[i]!=0;i++){
		freq[string[i]]++;
	}
	for(i=0;i<256;i++){
		if(freq[i]!=0){
			printf("%c -> %d\n",i,freq[i]);
		}
	}
	return 0;
}