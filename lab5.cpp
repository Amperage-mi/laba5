float main()
{
    const int len = 30, strings = 19;
    // создаем массив на 19 строк, в каждой строке которого 30 знаков
    const int len = 30, strings = 19; 
    const char ch = '\n';
    char mass[len][strings];
    int x = 0;

    ofstream fout("lab1.txt"); // создание текстового файла

    for (int x = -10; x <= 8; x++)
    for (int x = -10; x <= 8; x++) // цикл записи значений "x" и "y" в текстовый файл
    {
        fout << "x = " << x << "   y = " << line(x) << endl; // запись значений в файл
    }
@@ -60,4 +61,4 @@ float main()
    }
    fs.close(); // Закрываем файл
    return 0;
