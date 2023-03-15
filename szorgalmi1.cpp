/*
Script:

Volt egyszer, hol nem volt, volt egyszer egy óriási kisegér. Hatalmas nagy kisegér lába volt, hatalmas nagy kisegér arca volt, hatalmas nagy kisegér mája volt. Mer’, hogy kisegér értelmezési tartományban mérve volt ez hatalmas, tehát, hogy egy közepes gnú az, azért még mindig sokkal nagyobb.
	Egy napon ez az óriási kisegér világot akart látni, ezért otthon maradt internetezni. Addig maradt, maradgált, amíg szembe nem jött vele a Nyíregyháza.
 	-Szervusz, Nyíregyháza. - mondta az óriási kisegér (de tényleg óriási volt, hatalmas volt, terebélyes, gigantikus, bizánci, leviatán kisegér).
	-Hát te meg dögöljél meg, kisegér. Miért nincsen több munkalehetőség? – mondta a Nyíregyháza.
	-Énnekem te ne szóljál be mert kiszámítható vagy, mint a felületi gradiens. – mondta az óriási kisegér, azzal akarva-akaratlanul megszült egy indukciós főzőlapot. 
Ez volt az a pillanat, amikor délkelet felől odajött a sárkány. És ott volt nála a vödör xdddd vödör xdd he he he milyen hülye szó már, hogy vödör! Ott volt benne az egész adóbevallás! (bevallási határidő: május 20 ugye nem felejtettük el) Ott volt benne a vödörbe xddd a munkavállalói értékpapír juttatási program elismert programként történő nyivántartásba vételére irányuló kérelemnek az állami adóhatóság által rendszeresített nyomtatványmintája. 
	Hát, nézték egymást egy darabig majd azt mondta az óriási kisegér:
	-Énnekem egyébként kétségbevonhatatlanul hatalmamban áll nem itt lenni. – ment, (vessző) mendegélt.
	Összetalálkozott ezután egy elképesztően ronda lánnyal. Tehát, hogy erősen irracionális szám volt az arcának Hausdorff-dimenziója.
	-Szia. Ocsmány vagy. – köszönt a kisegér.
	-Segítsé’ rajtam, kisegér! Nem t’ok szelfit csinálni me’ olyan rút vagyok, hogy kigyullad alattam a Instagram. – mondta a lány valahogy.
	-Egyet sefélj! E’megyünk a izéhez, azt segítek neked. – mondta a kisegér, akinél nem volt vödör xddddd he he he.
Ezt követően addig mentek a lábukkal, amíg el nem jutottak az Instagramhoz magához. Ott  állott az Instagram előtt a nagy, büszke amerikai rétisas. Annyit mondott:
            -大家好! 认识你们很高兴! 你们身体好吗?
         -Ihr Passport ist leider nich mehr gültig, sie müssen sich weiterhin Kreisverwaltungsreferat melden. 
         -Ah! Yo no soy marinero soy capitán. – mondta az ocsmány asszony és pontosan e végett nyertek bebocsátást.
Az Instagramon belül pedig ott volt a bölcs lézer.
	-Helló. –hazudta a lézer.
	-Helló. –affektálta egér. ( de, hogy tényleg hatalmas, óriási, Jézusom!)
	-Ez az asszony rendkívül minek van. – mondta a lézer – Tehát, hogy a háború is csúnya és a megmikrózott kefir se szép. De, hogy ez az asszony, ez egy tíztől egy jó nőig tartó skálán hát erős tízes. No de, lássátok, kivel van dolgotok. – mondta a lézer, oszt hirtelen Baranyává változott, ott meg mindent lehet.
	Nagy boldogan ment hazafelé a kisegér, aki, ha eddig nem mondtam volna, kurva nagy volt, óri- hatalmas volt nagyon. Na szóval hazaért aztán ott lefeküdt aludni az ágyába, ami nem volt más, mint egy vödör xdddddd hö hö hö xddd XDDDD jaaaaj, vödör!

*/

#include <iostream>
#include <string>

#ifdef win32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

void beolvas(int &input){
    std::string be;
    std::cin >> be;
    try
    {
        input = std::stoi(be);
    }
    catch(const std::exception& e)
    {
        input = -1;
    }
    
}

void displaylink(){
    std::string linkek[2] = {
        "https://www.youtube.com/watch?v=dQw4w9WgXcQ",
        "https://www.youtube.com/watch?v=CLzMPM1anl4"
    };

    srand(time(NULL));

    short int num = rand() % 2;

    std::cout << linkek[num] << std::flush;

    sleep(rand()%3+3);

    std::cout << '\r' << linkek[1-num] <<"\033[K" << std::endl <<  std::flush;
}

unsigned char progress = 0;


int main(){
    goto bevezetes;

    hatraszalto:
    std::cout << "Az óriási kisegér csinált egy hátraszaltót." << std::endl;
    switch (progress)
    {
    case 1:
        goto valasztas1;
    case 2:
        goto valasztas2;
    case 3:
        goto valasztas3;
    case 4:
        goto valasztas4;
    case 5:
        goto valasztas5;
    case 6:
        goto valasztas6;
    default:
        goto bevezetes;
    }

    bevezetes:
    std::cout << "Volt egyszer, hol nem volt, volt egyszer egy óriási kisegér. Hatalmas nagy kisegér lába volt, hatalmas nagy kisegér arca volt, hatalmas nagy kisegér mája volt. Mer’, hogy kisegér értelmezési tartományban mérve volt ez hatalmas, tehát, hogy egy közepes gnú az, azért még mindig sokkal nagyobb." << std::endl;
    std::cout << "Egy napon ez az óriási kisegér világot akart látni." << std::endl;
    goto valasztas1;


    valasztas1:
    progress = 1;
    std::cout << "\tMit tegyen? " << std::endl;
    std::cout << "\t1: Maradjon otthon internetezni." << std::endl;
    std::cout << "\t2: Menjen el otthonról." << std::endl;
    std::cout << "\t3: Csináljon egy hátraszaltót." << std::endl;
    int input; 
    beolvas(input);
    switch (input)
    {
    case 1:
        goto otthonmarad;
    case 2:
        std::cout << "Nem tud kimenni, mert zárva van az ajtó." << std::endl;
        goto valasztas1;
    case 3:
        goto hatraszalto;
    default:
        std::cout << "Nincs ilyen opció" << std::endl;
        goto valasztas1;
    }

    otthonmarad:
    std::cout << "Addig maradt, maradgált, amíg szembe nem jött vele a Nyíregyháza." << std::endl;
    goto valasztas2;


    valasztas2:
    progress = 2;
    std::cout << "\tMit tegyen? " << std::endl;
    std::cout << "\t1: Menjen tovább." << std::endl;
    std::cout << "\t2: Üdvözölje." << std::endl;
    std::cout << "\t3: Csináljon egy hátraszaltót." << std::endl;
    beolvas(input);
    switch (input)
    {
    case 1:
        goto elmegy;
    case 2:
        goto udvozlinyiregyhazat;
    case 3:
        goto hatraszalto;
    default:
        std::cout << "Nincs ilyen opció" << std::endl;
        goto valasztas2;
    }

    udvozlinyiregyhazat:
    std::cout << "-Szervusz, Nyíregyháza. - mondta az óriási kisegér (de tényleg óriási volt, hatalmas volt, terebélyes, gigantikus, bizánci, leviatán kisegér)." << std::endl;
    std::cout << "-Hát te meg dögöljél meg, kisegér. Miért nincsen több munkalehetőség? – mondta a Nyíregyháza." << std::endl;
    goto valasztas3;

    valasztas3:
    progress = 3;
    std::cout << "\tMit tegyen? " << std::endl;
    std::cout << "\t1: Elmegy." << std::endl;
    std::cout << "\t2: Visszaszól." << std::endl;
    std::cout << "\t3: Csináljon egy hátraszaltót." << std::endl;
    beolvas(input);
    switch (input)
    {
    case 1:
        goto elmegy;
    case 2:
        goto visszaszol;
    case 3:
        goto hatraszalto;
    default:
        std::cout << "Nincs ilyen opció" << std::endl;
        goto valasztas3;
    }

    visszaszol:
    std::cout << "-Énnekem te ne szóljál be mert kiszámítható vagy, mint a felületi gradiens. – mondta az óriási kisegér, azzal akarva-akaratlanul megszült egy indukciós főzőlapot. " << std::endl;
    goto elmegy;

    elmegy:
    std::cout << "Ez volt az a pillanat, amikor délkelet felől odajött a sárkány. És ott volt nála a vödör xdddd vödör xdd he he he milyen hülye szó már, hogy vödör! Ott volt benne az egész adóbevallás! (bevallási határidő: május 20 ugye nem felejtettük el) Ott volt benne a vödörbe xddd a munkavállalói értékpapír juttatási program elismert programként történő nyivántartásba vételére irányuló kérelemnek az állami adóhatóság által rendszeresített nyomtatványmintája. " << std::endl;
    goto valasztas4;

    valasztas4:
    progress = 4;
    std::cout << "\tMit tegyen? " << std::endl;
    std::cout << "\t1: Tovább megy." << std::endl;
    std::cout << "\t2: Nézik egymást." << std::endl;
    std::cout << "\t3.Visszamegy otthon maradni." << std::endl;
    std::cout << "\t4: Csináljon egy hátraszaltót." << std::endl;
    beolvas(input);
    switch (input)
    {
    case 1:
        goto tovabbmegy;
    case 2:
        goto nezikegymast;
    case 3:
        goto otthonmarad;
    case 4:
        goto hatraszalto;
    default:
        std::cout << "Nincs ilyen opció" << std::endl;
        goto valasztas4;
    }


    nezikegymast:
    std::cout << "Hát, nézték egymást egy darabig majd azt mondta az óriási kisegér:" << std::endl;
	std::cout << "-Énnekem egyébként kétségbevonhatatlanul hatalmamban áll nem itt lenni. – ment, (vessző) mendegélt." << std::endl;
    goto tovabbmegy;


    tovabbmegy:
    std::cout << "Összetalálkozott ezután egy elképesztően ronda lánnyal. Tehát, hogy erősen irracionális szám volt az arcának Hausdorff-dimenziója." << std::endl;
    goto valasztas5;

    valasztas5:
    progress = 5;
    std::cout << "\tMit tegyen? " << std::endl;
    std::cout << "\t1: Köszön a lánynak." << std::endl;
    std::cout << "\t2: Elmegy." << std::endl;
    std::cout << "\t3. Visszamegy a sárkányhoz" << std::endl;
    std::cout << "\t4: Csináljon egy hátraszaltót." << std::endl;
    beolvas(input);
    switch (input)
    {
    case 1:
        goto koszonalanynak;
    case 2:
        goto hazamegy;
    case 3:
        std::cout << "Az egérke (ami amúgy tényleg hatalmas volt) visszafordult és ment, (vessző) mendegélt." << std::endl;
        goto elmegy;
    case 4:
        goto hatraszalto;
    default:
        std::cout << "Nincs ilyen opció" << std::endl;
        goto valasztas5;
    }

    koszonalanynak:
    std::cout << "-Szia. Ocsmány vagy. – köszönt a kisegér." << std::endl;
    std::cout << "-Segítsé’ rajtam, kisegér! Nem t’ok szelfit csinálni me’ olyan rút vagyok, hogy kigyullad alattam a Instagram. – mondta a lány valahogy." << std::endl;
    goto valasztas6;

    valasztas6:
    progress = 6;
    std::cout << "\tMit tegyen? " << std::endl;
    std::cout << "\t1: Segítsen." << std::endl;
    std::cout << "\t2: Hagyja ott és menjen haza." << std::endl;
    std::cout << "\t3: Menjen egy kört." << std::endl;
    std::cout << "\t4: Csináljon egy hátraszaltót." << std::endl;
    beolvas(input);
    switch (input)
    {
    case 1:
        goto segitneki;
    case 2:
        goto hazamegy;
    case 3:
        std::cout << "Az óriási kisegér (aki kisegér értelmezési tartományban mérve volt ez hatalmas, tehát, hogy egy közepes gnú az, azért még mindig sokkal nagyobb.) tett egy 360 fokos fordulatot és elindult." << std::endl;
        goto tovabbmegy;
    case 4:
        goto hatraszalto;
    default:
        std::cout << "Nincs ilyen opció" << std::endl;
        goto valasztas6;
        break;
    }
    


    segitneki:
    std::cout << "-Egyet sefélj! E’megyünk a izéhez, azt segítek neked. – mondta a kisegér, akinél nem volt vödör xddddd he he he." << std::endl;
    std::cout << "Ezt követően addig mentek a lábukkal, amíg el nem jutottak az Instagramhoz magához. Ott  állott az Instagram előtt a nagy, büszke amerikai rétisas. Annyit mondott:" << std::endl; 
    std::cout << "-大家好! 认识你们很高兴! 你们身体好吗?" << std::endl;
    std::cout << "-Ihr Passport ist leider nich mehr gültig, sie müssen sich weiterhin Kreisverwaltungsreferat melden. " << std::endl;
    std::cout << "-Ah! Yo no soy marinero soy capitán. – mondta az ocsmány asszony és pontosan e végett nyertek bebocsátást." << std::endl;
    goto talalkoznakalezerrel;

    talalkoznakalezerrel:
    std::cout << "Az Instagramon belül pedig ott volt a bölcs lézer." << std::endl;
	std::cout << "-Helló. –hazudta a lézer." << std::endl;
	std::cout << "-Helló. –affektálta egér. ( de, hogy tényleg hatalmas, óriási, Jézusom!)" << std::endl;
	std::cout << "-Ez az asszony rendkívül minek van. – mondta a lézer – Tehát, hogy a háború is csúnya és a megmikrózott kefir se szép. De, hogy ez az asszony, ez egy tíztől egy jó nőig tartó skálán hát erős tízes. No de, lássátok, kivel van dolgotok. – mondta a lézer, oszt hirtelen Baranyává változott, ott meg mindent lehet." << std::endl;
    goto hazamegy;


    hazamegy:
    std::cout << "Nagy boldogan ment hazafelé a kisegér, aki, ha eddig nem mondtam volna, ***** nagy volt, óri- hatalmas volt nagyon. Na szóval hazaért aztán ott lefeküdt aludni az ágyába, ami nem volt más, mint egy vödör xdddddd hö hö hö xddd XDDDD jaaaaj, vödör!" << std::endl;
    goto vege;

    vege:
    std::cout << "Vége" << std::endl;
    std::cout << "Ez a történet nem az én szellemi tulajdonom, csak felhasználtam ezt az igazán nagyszerű videót: " << std::endl;
    displaylink();

    return 0;
}