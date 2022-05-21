Tutorial
-----------------

GNU/Linux operating systems allow the management of multiple users and groups, so it is an interesting aspect to take into account.

Before starting with the examples, it is necessary to have super user permission to be able to carry out such actions. To obtain these permissions, one of the ways to achieve it is to prepend the word “sudo” to the command that will be addressed in each section. Now we can continue with the tutorial:

Example
----------------

In order to create a new user, the following syntax must be taken into account:
* `sudo useradd [options] username`

Among the options we find the following:

| Options | Meaning |
| ------ | ------ |
| -u uid  | Number that identifies the user |
| -g primary_group  |group identifier|
| -G group2, group3, group4 ... | List of secondary group names |
| -d directory  | Absolute path to the connection directory |
| -s Shell  | Absolute path to shell |
| -e date  | Expiration date of the new account |
| -p password   | Password |


In order to modify the attributes of a user (which has already been created) the following syntax must be taken into account:
* `sudo usermod [options] username`

| Options | Meaning |
| ------ | ------ |
| -c (–comment)  | Sets the user's full name and other relevant account data |
| -d (–home)   |Assigns a new HOME directory to the user|
| -m  | Moves the contents of the user's HOME to a new location |
| -g | Changes the user's primary group. Group name or number must be used. The group must already exist |
| -G | Set the groups to which the user will belong. If the user already belongs to any group in the system and this group is not named when using this option, it will disappear from that group |
| -L | Locks the user's account. Simply set a '!' in front of the encrypted key |
| -U | Expiration date of the new account |
| -e (–expiredate)  | Unlock the user's account. Remove the '!' in front of the encrypted key |
| -s   | Selects the new Shell to be used by the user. If left blank it will use the default one set in the system |

In order to delete a user (which has already been created) the following syntax must be taken into account:

* `sudo userdel [options] username`


| Options | Meaning |
| ------ | ------ |
| -r  | Also deletes the user's login directory, and the user's mail spool |

Example 1: Create user1, specifying its connection directory --> /home/user1.
```sh
sudo mkdir /home/user1
sudo useradd –d /home/user1 user1
```
Example 2: Create user2 which must have "bash" as shell type, must belong to the group "collaborator" and its id number must be 1500.
```sh
sudo groupadd collaborator
sudo useradd -s /bin/bash -g collaborator -u 1500 user2
```
Please note:
The user that has been created can be verified in the /etc/passwd file:
```sh
cat /etc/passwd | grep ^user2
```
The group to which user2 belongs can be verified with the following command:
```sh
groups user2
```
Example 3: Change the shell type of user2 to "/bin/sh" and the primary group it will now belong to is "manager". 
```sh
sudo groupadd manager
sudo usermod -s /bin/sh -g manager user2
```
Example 4: Delete user2 where it is necessary to also delete its associated connection directory
```sh
sudo userdel -r user2
```
Exercise
--------
In a technological university it is necessary to add 2 new students called "Tomas" and "Lu" to a group called "Investigation" where the shell they will use is "bash". Their connection directories should be investigation_tomas and investigation_lu (HOME). 

Solution
--------
```sh
sudo groupadd Investigation
sudo mkdir /home/investigation_tomas
sudo useradd -g Investigation -s /bin/bash -d /home/investigation_tomas tomas
sudo mkdir /home/investigation_lu
sudo useradd -g Investigation -s /bin/bash -d /home/investigation_lu lu
cat /etc/passwd | grep ^tomas
groups tomas
cat /etc/passwd | grep ^lu
groups lu
```



