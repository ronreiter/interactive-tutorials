Decorators επιτρέπουν να κάνετε απλές τροποποιήσεις σε αντικείμενα τα οποία μπορούν να κληθούν όπως [συναρτήσεις](http://www.learnpython.org/en/Functions ""), [μέθοδοι, ή κλάσεις](http://www.learnpython.org/en/Classes%20and%20Objects ""). Θα ασχοληθούμε με τις συναρτήσεις σε αυτό το εκπαιδευτικό μάθημα. Η σύνταξη

```python
@decorator
def function(arg):
    return "value"
```

είναι ισοδύναμη με:

```python
def function(arg):
    return "value"
function = decorator(function) # περνά τη συνάρτηση στον decorator και την επανατοποθετεί στη συνάρτηση
```

Όπως ίσως έχετε δει, ένας decorator είναι απλά μια άλλη συνάρτηση που παίρνει μια συνάρτηση και επιστρέφει μία. Για παράδειγμα θα μπορούσατε να κάνετε αυτό:

```python
def repeater(old_function):
    def new_function(*args, **kwds): # Δείτε learnpython.org/en/Multiple%20Function%20Arguments για το πώς λειτουργεί το *args και το **kwds
        old_function(*args, **kwds) # εκτελούμε την παλιά συνάρτηση
        old_function(*args, **kwds) # την εκτελούμε δύο φορές
    return new_function # πρέπει να επιστρέψουμε τη νέα συνάρτηση, αλλιώς δεν θα επανατοποθετηθεί στην τιμή
```

Αυτό θα έκανε μια συνάρτηση να εκτελείται δύο φορές.

```python
>>> @repeater
def multiply(num1, num2):
    print(num1 * num2)

>>> multiply(2, 3)
6
6
```

Μπορείτε επίσης να κάνετε να αλλάξει το αποτέλεσμα

```python
def double_out(old_function):
    def new_function(*args, **kwds):
        return 2 * old_function(*args, **kwds) # τροποποιεί την επιστρεφόμενη τιμή
    return new_function
```

να αλλάξει την είσοδο

```python
def double_Ii(old_function):
    def new_function(arg): # λειτουργεί μόνο αν η παλιά συνάρτηση έχει ένα επιχείρημα
        return old_function(arg * 2) # τροποποιεί το επιχείρημα που περνάει
    return new_function
```

και να κάνει έλεγχο.

```python
def check(old_function):
    def new_function(arg):
        if arg < 0: raise (ValueError, "Negative Argument") # Αυτό προκαλεί ένα σφάλμα, το οποίο είναι καλύτερο από το να κάνει το λάθος πράγμα
        old_function(arg)
    return new_function
```

Ας πούμε ότι θέλετε να πολλαπλασιάσετε το αποτέλεσμα με μια μεταβλητή ποσότητα. Θα μπορούσατε να ορίσετε τον decorator και να το χρησιμοποιήσετε ως εξής:

```python
def multiply(multiplier):
    def multiply_generator(old_function):
        def new_function(*args, **kwds):
            return multiplier * old_function(*args, **kwds)
        return new_function
    return multiply_generator # επιστρέφει το νέο generator
```

# Χρήση
```python
@multiply(3) # πολλαπλάσιο δεν είναι generator, αλλά το multiply(3) είναι
def return_num(num):
    return num
```
    
# Τώρα το return_num είναι διακοσμημένο και επανατοποθείται στον εαυτό του
```python
return_num(5) # θα πρέπει να επιστρέψει 15
```

Μπορείτε να κάνετε οτιδήποτε θέλετε με την παλιά συνάρτηση, ακόμα και να την αγνοήσετε εντελώς! Οι προχωρημένοι decorators μπορούν επίσης να χειριστούν το doc string και τον αριθμό των επιχειρημάτων.
Για μερικους εντυπωσιακούς decorators, επισκεφθείτε το <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Άσκηση
--------
Δημιουργήστε ένα εργοστάσιο decorators που επιστρέφει έναν decorator ο οποίος διακοσμεί συναρτήσεις με ένα επιχείρημα. Το εργοστάσιο πρέπει να παίρνει ένα επιχείρημα, έναν τύπο, και στη συνέχεια να επιστρέφει έναν decorator που να ελέγχει αν η είσοδος είναι του σωστού τύπου. Αν είναι λάθος, πρέπει να εκτυπώνει("Bad Type") (Στην πραγματικότητα, θα πρέπει να προκαλεί ένα σφάλμα, αλλά η πρόκληση σφαλμάτων δεν είναι σε αυτό το εκπαιδευτικό μάθημα). Δείτε τον κώδικα του tutorial και το αναμενόμενο αποτέλεσμα για να δείτε τι είναι αν μπερδευτείτε (ξέρω ότι θα μπερδευόμουν). Η χρήση του isinstance(object, type_of_object) ή του type(object) μπορεί να βοηθήσει.