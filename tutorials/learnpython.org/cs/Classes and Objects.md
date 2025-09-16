Objects jsou zapouzdřením proměnných a funkcí do jednotného celku. Objekty své proměnné a funkce získávají z tříd. Třídy jsou v podstatě šablonou pro vytváření objektů.

Velmi základní třída může vypadat takto:

Vysvětlíme, proč musíte zahrnout "self" jako parametr, trochu později. Nejprve, abyste přiřadili výše uvedenou třídu (šablonu) k objektu, udělali byste následující:

Nyní proměnná "myobjectx" obsahuje objekt třídy "MyClass", který obsahuje proměnnou a funkci definovanou v rámci třídy "MyClass".

### Přístup k proměnným objektu

Chcete-li přistupovat k proměnné uvnitř nově vytvořeného objektu "myobjectx", udělali byste následující:

Například níže uvedený příklad by vrátil řetězec "blah":

Můžete vytvořit více různých objektů, které jsou téže třídy (mají stejné definované proměnné a funkce). Každý objekt však obsahuje nezávislé kopie proměnných definovaných v třídě. Například pokud bychom definovali další objekt s třídou "MyClass" a poté změnili řetězec v proměnné výše:

### Přístup k funkcím objektu

Pro přístup k funkci uvnitř objektu používáte podobnou notaci jako pro přístup k proměnné:

Výše uvedený příklad by vypsal zprávu "This is a message inside the class."

### __init__()

Funkce `__init__()`, je speciální funkce, která je volána při inicializaci třídy. Používá se k přiřazování hodnot v třídě.

Exercise
--------

Máme definovanou třídu pro vozidla. Vytvořte dvě nová vozidla s názvy car1 a car2. Nastavte car1 tak, aby to byl červený kabriolet v hodnotě $60,000.00 se jménem Fer, a car2 tak, aby to byla modrá dodávka pojmenovaná Jump v hodnotě $10,000.00.