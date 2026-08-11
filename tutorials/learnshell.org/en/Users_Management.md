Tutorial
--------
GNU/Linux operating systems allow the management of multiple users and groups, so it is an interesting aspect to take into account.

Before starting with the examples, it is necessary to have superuser permission to be able to carry out such actions. To obtain these permissions, one of the ways to achieve it is to prepend the word `sudo` to the command that will be addressed in each section.

In order to create a new user, the following syntax must be taken into account:

* `sudo useradd [options] username`

Among the options we find the following:

| Options | Meaning |
| ------ | ------ |
| -u uid  | Number that identifies the user |
| -g primary_group  | Group identifier |
| -G group2, group3, group4 ... | List of secondary group names |
| -d directory  | Absolute path to the connection directory |
| -s Shell  | Absolute path to shell |
| -e date  | Expiration date of the new account |
| -p password   | Password |

In order to modify the attributes of a user (which has already been created) the following syntax must be taken into account:

* `sudo usermod [options] username`

In order to delete a user (which has already been created) the following syntax must be taken into account:

* `sudo userdel [options] username`

Example 1: Create user1, specifying its connection directory --> /home/user1.

    sudo mkdir /home/user1
    sudo useradd -d /home/user1 user1

Example 2: Create user2 which must have "bash" as shell type, must belong to the group "collaborator" and its id number must be 1500.

    sudo groupadd collaborator
    sudo useradd -s /bin/bash -g collaborator -u 1500 user2

Please note: the user that has been created can be verified in the /etc/passwd file:

    cat /etc/passwd | grep ^user2

The group to which user2 belongs can be verified with the following command:

    groups user2

Example 3: Change the shell type of user2 to "/bin/sh" and the primary group it will now belong to is "manager".

    sudo groupadd manager
    sudo usermod -s /bin/sh -g manager user2

Example 4: Delete user2 where it is necessary to also delete its associated connection directory:

    sudo userdel -r user2

Exercise
--------
A mock user database is stored in `users.txt`. Complete the line below so that it prints only the line belonging to the user `tomas`.

Tutorial Code
-------------
    #!/bin/bash
    cat <<EOF > users.txt
    root:x:0:0:root:/root:/bin/bash
    tomas:x:1001:1001:Tomas:/home/tomas:/bin/bash
    lu:x:1002:1002:Lu:/home/lu:/bin/bash
    EOF
    # write your code here
    grep "doesnotexist" users.txt

Expected Output
---------------
    tomas:x:1001:1001:Tomas:/home/tomas:/bin/bash

Solution
--------
    #!/bin/bash
    cat <<EOF > users.txt
    root:x:0:0:root:/root:/bin/bash
    tomas:x:1001:1001:Tomas:/home/tomas:/bin/bash
    lu:x:1002:1002:Lu:/home/lu:/bin/bash
    EOF
    grep tomas users.txt
