# IMPR-Lecture-1

## Opgave 1
Formålet med denne opgave er at øve dig i arbejdsprocesserne vi vil bruge til dette kursus.
De arbejdsprocesser minder meget om dem der også bliver brugt i industrien.

Åben først projektet i CLion, det kan du gøre ved at klikke på "Get from VCS". 
Du skal bruge den stump tekst du finder under "Code"-knappen på Github under "ssh"-fanen.

Når projektet er åbent vil du se en mappe kaldet [src](src). I den vil du finde de to kodestumper du skal bruge i dag.

Filerne har følgende rolle:

- [README.md](README.md) er denne fil, den er skrevet i "Markdown" som gør at CLion viser den pænt,
- [.gitignore](.gitignore) hjælper versionsstyringsprogrammet Git med at frasortere filer (det kommer vi kort ind på senere i kurset),
- [LICENSE](LICENSE) beskriver hvilke rettigheder du har over den kode du har hentet ned (jeg bruger så vidt muligt MIT, det betyder at i har ret til mere eller mindre alt),
- [src/exercise1.c](src/exercise1.c) er et lille test-program der beregner omkredsen af en cirkel, 
- [src/exercise2.c](src/exercise2.c) er et dårligt formateret program vi skal kigge på i opgave 2, og
- [src/CMakeLists.txt](src/CMakeLists.txt) er en tekstfil der hjælper CLion med at vide hvordan programmerne skal oversættes til noget din computer forstår. Vi kigger kort på CMake senere i kurset.

Prøv først om du kan compile programmerne. Det gør du ved at trykke på den grønne hammer øverst.
Hvis du set teksten `Build finished` i bunden af CLion kan du gå videre, ellers hiv fat i en medstuderende eller en hjælpelærer.

Lykkedes det, så kan du nu kære programmet. Til højre for "hammeren" kan du vælge en `Run configuration`, vælg her `exercise1`.
Du kan nu trykke på pilen. Programmet beder dig indtaste en radius - prøv, og afslut med at trykke på `<enter>`.

Prøv at lave en simpel ændring af [src/exercise1.c](src/exercise1.c): Oversæt f.eks. den fast engelske tekst i printf til dansk.

Prøv at lave forskellige små ændringer (fejl) i programmet, og find ud hvad compileren fortæller dig når du oversætter ("hammeren")
det ændrede program.

## Opgave 2
Denne opgave handler om hvordan et C program 'ser ud'. Opgaven giver dig indsigt i programmeringsstil og hvorfor det er vigtigt at have en god stil.

Et C program kan formateres på mange forskellige måder. 
Indrykning, tomme linier og ekstra mellemrum kan relativt frit tilføjes i ethvert C program. 
En bestemt programmeringsstil (programming style, coding style) giver anvisninger på, hvordan et program skal formateres. 
Dårlig og inkonsistent programmeringsstil hæmmer læsbarheden af et program. 
Formålet med denne opgave er at skabe bevidsthed om programmeringsstil. 
Emnet vil blive bragt op gentagne gange undervejs i kurset. 
Så hvorfor ikke starte allerede i dag?

I [src/exercise2.c](src/exercise2.c) er et eksempel på et program, som er formateret på en overordentlig uheldig måde.

- Kan programmet oversættes (får du fejl når du trykker på hammeren)?
- Kan det køres?

For at køre programmet skal du skifte din `Run configuration` til højre for hammeren til `exercise2`. 

Diskuterer svaghederne i det viste program. Kan du/I forstå hvad der sker i programmet?

Introducer en bedre programmeringsstil i programmet, ved udelukkende at ændre på 'white spacing' (indrykning, tomme linier, og antallet af mellemrum mellem programmets dele). 
Dette er en god øvelse, idet den tvinger jer til at tage stilling til rollen af hvert symbol I møder, uafhængig af hvordan symbolet indgår i opstillingen af programmet. 
Compileren arbejder på samme måde - i det mindste i udgangspunktet.

Lav evt. en version af programmet, som giver endnu større læsbarhed ved f.eks. at ændre på variabelnavngivning. 
Du må også gerne ændre på promten og øvrige udskrifter i programmet.

Der er mange ressourcer af programmeringsstil (i C) på nettet. Læs indledningsvis Wikipedia's artikel om emnet.

## Opgave 3
Grunden til at vi anvender versionsstyrringssystemet (Version Control System, VCS) kaldet GIT er:
- det arbejder pænt sammen med CLion,
- det er MEGET brugt i industrien, og
- det gør det muligt for jeres TA'er og mig at give feedback på en struktureret måde - præcist som du kommer til at opleve det senere i din karriere.

For det meste kommer du til at bruge to operationer:
1. `commit` hvor du kan gemme en version af dit arbejde lokalt på din maskine, og
2. `push` hvor du sender alle dine lokale `commit` versioner til Github.

Når du laver et `push` på opgaven kan dine TA'er og jeg se dine ændringer og give dig kommentarer.

Prøv nu at lav et commit.
Højreklik på mappen [IMPR-Lecture-1](./), vælg `git` og tryk commit.

Du kan nu vælge hvilke fil-ændringer (siden sidste commit) du gerne vil have med.
Du skal også tilføje en kommentar der hjælper dig med at huske hvad ændringen er.

Når du er færdig kan du trykke på `Commit` knappen i bunden.

For at lave et et push skal du igen højreklikke på mappen [IMPR-Lecture-1](./) men denne gang vælge `push`.
Du bliver nu vist de commits du er ved at sende online, og du bekræfter at du vil sende dem med et tryk på `push` igen.

Sådan bliver proceduren for at lave de afleveringsopgaver og miniprojekter du skal lave som en del af kurset.

Alt det feedback vi giver bliver vist på din github side for den specifikke opgave. 
Det var den side du oprindeligt fandt linket til denne opgave på.
Det er kun dig og dine undervisere der kan se din opgave og dit feedback.