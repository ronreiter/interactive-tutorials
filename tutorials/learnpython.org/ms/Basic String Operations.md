Strings adalah potongan teks. Mereka boleh ditakrifkan sebagai apa sahaja di antara tanda petikan:

As you can see, the first thing you learned was printing a simple sentence. This sentence was stored by Python as a string. However, instead of immediately printing strings out, we will explore the various things you can do to them.
Anda juga boleh menggunakan tanda petikan tunggal untuk menetapkan rentetan. Walau bagaimanapun, anda akan menghadapi masalah jika nilai yang akan ditetapkan itu sendiri mengandungi tanda petikan tunggal. Sebagai contoh, untuk menetapkan rentetan dalam kurungan ini (tanda petikan tunggal adalah ' '), anda perlu menggunakan tanda petikan berganda sahaja seperti ini.

Itu mencetak 12, kerana "Hello world!" adalah 12 karakter panjangnya, termasuk tanda baca dan ruang.

Itu mencetak 4, kerana lokasi kejadian pertama huruf "o" adalah 4 karakter dari karakter pertama. Perhatikan bagaimana sebenarnya terdapat dua o dalam frasa tersebut - kaedah ini hanya mengenali yang pertama.

Tetapi mengapa ia tidak mencetak 5? Bukankah "o" adalah karakter kelima dalam rentetan? Untuk membuat perkara lebih mudah, Python (dan kebanyakan bahasa pengaturcaraan lain) mula perkara di 0 dan bukannya 1. Jadi indeks "o" adalah 4.

Bagi anda yang menggunakan fon lucu, itu adalah L huruf kecil, bukan nombor satu. Ini mengira bilangan huruf l dalam rentetan. Oleh itu, ia harus mencetak 3.

Ini mencetak sebahagian daripada rentetan, bermula pada indeks 3, dan berakhir di indeks 6. Tetapi mengapa 6 dan bukan 7? Sekali lagi, kebanyakan bahasa pengaturcaraan melakukan ini - ia memudahkan membuat pengiraan di dalam kurungan tersebut.

Jika anda hanya mempunyai satu nombor dalam kurungan, ia akan memberikan anda karakter tunggal di indeks tersebut. Jika anda meninggalkan nombor pertama tetapi menyimpan titik bertitik, ia akan memberikan anda sebahagian dari permulaan hingga nombor yang anda tinggalkan. Jika anda meninggalkan nombor kedua, ia akan memberikan anda sebahagian dari nombor pertama hingga akhir.

Anda boleh meletakkan nombor negatif di dalam kurungan. Mereka adalah cara yang mudah untuk bermula dari akhir rentetan dan bukannya dari permulaan. Dengan cara ini, -3 bermaksud "karakter ke-3 dari akhir".

Ini mencetak karakter rentetan dari 3 hingga 7 melangkau satu karakter. Ini dipanggil sintaks potong yang diperluaskan. Bentuk umum adalah [mula:berhenti:langkah].

Perhatikan bahawa kedua-dua mereka menghasilkan output yang sama

Tidak ada fungsi seperti strrev dalam C untuk membalikkan rentetan. Tetapi dengan jenis sintaks potong yang disebutkan di atas, anda boleh membalikkan rentetan dengan mudah seperti ini.

Ini

Ini membuat rentetan baru dengan semua huruf ditukar kepada huruf besar dan huruf kecil, masing-masing.

Ini digunakan untuk menentukan sama ada rentetan bermula dengan sesuatu atau berakhir dengan sesuatu, masing-masing. Yang pertama akan mencetak True, kerana rentetan bermula dengan "Hello". Yang kedua akan mencetak False, kerana rentetan itu pasti tidak berakhir dengan "asdfasdfasdf".

Ini membahagi rentetan menjadi sekumpulan rentetan yang dikelompokkan bersama dalam senarai. Oleh kerana contoh ini membahagi pada ruang, item pertama dalam senarai adalah "Hello", dan yang kedua adalah "world!".

Exercise
--------

Cuba perbaiki kod untuk mencetak maklumat yang betul dengan menukar rentetan.