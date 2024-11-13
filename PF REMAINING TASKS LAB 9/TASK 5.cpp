#include<stdio.h>
#include<string.h>
int main()
{
	int l,len_plaintext;
	char plaintext[50];
	char key[30];
	printf("Enter Text To Encrypt : \n");
	fgets(plaintext,sizeof(plaintext),stdin);
	plaintext[strcspn(plaintext,"\n")]='\0';
	printf("Enter Key : \n");
	scanf("%s",key);	
	key[strcspn(key,"\n")]='\0';
	char final_cipher[30];
	len_plaintext=strlen(plaintext);
	int plaintext1[len_plaintext];
	int key1[len_plaintext],cipher[len_plaintext];
	l = strlen(key);	
	for(int i=0 ; i<len_plaintext ; i++){
		key[i]=key[i%l];
	}
	for(int i=0 ; i<len_plaintext ; i++){
		if(plaintext[i]==' '){
		plaintext1[i]=20;
		key1[i]=key[i];	
	}else{
		plaintext1[i]=plaintext[i];
		key1[i]=key[i];}
			}
	for(int i=0 ; i<len_plaintext ; i++){
	 if(plaintext1[i]==20){
	 	key1[i]-=64;
	 }else{
	 	key1[i]-=64;
	 	plaintext1[i]-=64;
	 }

	}
	for(int i=0 ; i<len_plaintext ; i++){
	cipher[i]=plaintext1[i]+key1[i];
	}
		
	for(int i=0 ; i<len_plaintext ; i++){
		cipher[i]=cipher[i]%26;
		}
		for(int i=0 ; i<len_plaintext ; i++){
		cipher[i]=cipher[i]+64;
		}
		for(int i=0 ; i<len_plaintext ; i++){
		   final_cipher[i]=cipher[i];
		}
			for(int i=0 ; i<len_plaintext ; i++){
				printf("%c",final_cipher[i]);
			}
return 0;
}
