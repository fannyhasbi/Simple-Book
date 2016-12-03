#include <stdio.h>

void spasi(int); //untuk menambahkan jumlah spasi dengan cepat
int main(){
	int x = 1; //boolean dengan angka
	int hal = 1; //sebagai nomor halaman
	
	while(x == 1){
		system("cls");
		switch(hal){
			case 1:
				printf("\n\n\n\n\n");
				spasi(30); printf("Sejarah Bahasa C");
				break;
			case 2:
				spasi(25); printf("Alasan Dinamakannya Bahasa C\n\n\n\n");
				printf("Siapa yang tidak kenal dengan Bahasa Pemrograman C, Bahasa C merupakan salah satu bahasa pemrograman yang paling populer sejak keberadaannya 44 tahun silam. Diciptakan oleh seorang programmer amerika terkenal yaitu Dennis Ritchie - Dengan dibantu oleh Ken Thompson ketika bekerja di lab Bell. Banyak dari kita mungkin bertanya-tanya mengapa bahasa pemrograman ini dinamai dengan satu huruf alphabet dan mengapa C bukan huruf yang lain. Bagaimanapun kita akan tetap mempertanyakan nama dari bahasa pemrograman jika menggunakan huruf yang berbeda.\n\n\n");
				spasi(32); printf("Halaman 2");
			break;
			case 3:
				printf("\n\n\tPenamaan bahasa pemrograman C tidak serta merta terkait dengan kisah fiksi garing seperti kisah penguin Tux milik Linux. Diceritakan Linus Trovalds. Sang pencipta Linux, yang mengontrak seorang penguinitis mengejar penguin pemakan manusia yang lari 100 mil perjam yang telah menyerangnya.\n\n\n");
				spasi(32); printf("Halaman 3");
			break;
			case 4:
				printf("\n\n\tAlasan mengapa bahasa pemrograman ini dinamakan C oleh pembuatnya karena bahasa ini lahir setelah adanya bahasa pemrograman B. Sebelumnya, Bell Labs sudah memiliki bahasa pemrograman yang disebut B. Bahasa B merupakan bahasa pemrograman tingkat tinggi yang diciptakan oleh Thompson. Bahasa itu sendiri merupakan implementasi dari bahasa pemrograman BCPL yang didesain oleh Martin Richards dari Universitas Cambridge.\n\n\n");
				spasi(32); printf("Halaman 4");
			break;
			case 5:
				printf("\n\n\tOperasi sistem Unix aslinya merupakan ciptaan Ken Thompson di lab Bell. Dennis Ritchie dan yang lainnya saat itu mengimplementasikan pada PDP-7 komputer (dibuat oleh Digital Equipment Corporation di tahun 1965) menggunakan bahasa Assembly. Selanjutnya Unix di porting ke PDP-11 menggunakan bahasa Assembly tetapi para developer berfikir tentang menulis ulang menggunakan bahasa B.\n\n\n");
				spasi(32); printf("Halaman 5");
			break;
			default:
				printf("404 Page not Found\n\n\n");
		}
		printf("\n\n\nKe halaman: ");
		scanf("%d",&hal);
		
		//Cek jika inputnya adalah 0
		if(hal == 0){
			x = 0;
			system("cls");
			printf("Terima kasih telah membaca, sampai jumpa!");
		}
	}
	
	getch();
	return 0;
}
void spasi(int a){
	int c;
	for(c=1;c<=a;c++){
		printf(" ");
	}
}
