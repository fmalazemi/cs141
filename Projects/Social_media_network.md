
# **Project: Social Network Graph** 

## **Objective**
  - **Program with many features**: To implement a program in C++ that models a simple social network as a graph. The graph is represented as an **adjacency matrix**. Students will use basic data structures (e.g. arrays, multi-dimensional arrays,  vectors, Maps etc) and file I/O operations to manage and manipulate the graph.
  - **CS142 Preparation**: This project will prepare you for CS142. Also, it will help you to deeply understand and apply key programming concepts such as loops, conditionals, functions, and file handling.
  - **Group work**: You can choose to work on this project individually or in a group of two. Collaborating in a group allows you to share ideas, learn from each other, and solve problems more effectively. It also helps you develop teamwork skills, gain new perspectives, and achieve more than you could on your own.
  - **Presentation**: You and your teammate will be required to present your work at the end of the project.
  - **Self-learning**: Self-learning builds independence, confidence, and gives you skills to adapts you to new challenges. This is essential for personal and professional success. This project challenges you to explore topics beyond what we covered in cs141, preparing you for concepts you’ll encounter in CS142.

---

## **Project Description**
Social media refers to online platforms that enable users to create, share, and interact with content while connecting with others. The Underlying these platforms is a social media network. This network is represented as a graph where users are nodes and their connections (friendships, follows, or interactions) are edges. This structure facilitates information flow and community building.

Formally, a social network graph is a representation where:
- **Nodes** represent persons in the network.
- **Edges** represent friendships between persons.

  
![Can not read Image](images/social_network_example.jpg)

(source: https://www.scielo.org.mx/img/revistas/cys/v26n1//2007-9737-cys-26-01-311-gf1.jpg)



---

## **Features**
The program should allow the user to perform the following operations on the social network graph:

### **1. Load Graph from a File**
- **Input file format:**  
  Each line represents a person and their friends in the format:
  ```
  Person: Friend1,Friend2,Friend3,...
  ```
  **Example:**
  ```
  Alice: Bob,Charlie
  Bob: Alice
  Charlie: Alice
  ```
- The program should parse the file and construct the social network graph.

---

### **2. Print All Friends of Person X**
- The program should prompt the user for a person's name and display their list of friends.  
  **Example:**  
  - Input: `Alice`  
  - Output: `Alice's friends: Bob, Charlie`

---

### **3. Add Friend to Person X**
- The program should allow adding a new friend to an existing person.  
  **Example:**  
  - Input: `Alice, Dave`  
  - Output: `Dave added as a friend to Alice.`  
  - **Note:** Ensure the friendship is mutual (add the link both ways).

---

### **4. Add Person Y to Social Network**
- Add a new person to the graph with no initial friends.
- If person already exist, print "Person Already exists."
  **Example:**  
  - Input: `Eve`  
  - Output: `Eve added to the social network.`

---

### **5. Print All Persons and Their Friends**
- Display the entire social network in the format:
  ```
  Alice: Bob, Charlie
  Bob: Alice
  Charlie: Alice
  ```

---

### **6. Check if Person Z is a Common Friend of Person X and Person Y**
- **Input:** `X, Y, Z`  
- **Output:**  
  - `Yes, Z is a common friend.`  
  - or  
  - `No, Z is not a common friend.`

---

### **7. Write Graph to an Output File**
- Save the current state of the graph to an output file in the same format as the input file.  
  **Example:**
  ```
  Alice: Bob,Charlie,Dave
  Bob: Alice
  Charlie: Alice
  Dave: Alice
  ```

---

## **Sample Input/Output**

### **Input File (`social_network.txt`):**
```
Alice: Bob,Charlie
Bob: Alice
Charlie: Alice
```

### **Program Execution:**
```
1. Load graph from file
2. Print all friends of a person
3. Add friend to a person
4. Add a person to the social network
5. Print all persons and their friends
6. Check if a person is a common friend
7. Write graph to file
8. Exit
Enter your choice: 1
Enter file name: social_network.txt
Graph loaded successfully.

Enter your choice: 2
Enter person's name: Alice
Alice's friends: Bob, Charlie

Enter your choice: 3
Enter person's name and friend to add (format: Person, Friend): Alice, Dave
Dave added as a friend to Alice.

Enter your choice: 5
Social Network:
Alice: Bob, Charlie, Dave
Bob: Alice
Charlie: Alice
Dave: Alice

Enter your choice: 7
Enter output file name: output_network.txt
Graph written to file successfully.
```

---

## **Implementation Guidelines/Hints**

1. **Map names to integers** Use a `std::map` to map names to integers:
   - Keys are `std::string` (person's name).
   - Values are `int` row index of person in the adjacency matrix

1. **Adjacency Matrix** Use a 2D `std::vector` of integers to represent the adjacency matrix:
   - Row `i` represent person `i` friends list 

2. **File Handling:**
   - Use `std::ifstream` and `std::ofstream` for reading and writing files.
   - Handle errors like missing files.
   - Make sure to close files before existing the program.

3. **Functions to Implement:**
   - Implement a function for each option in the program.
6. **Code Style:**
   - Write clean, modular code.
   - Comment your functions to describe their purpose.
7. **Online Resources**
   - You may use any online resource (youtube, geeksforgeeks.com, chatgpt, ... etc)
   - Any resource you use must be reported in the final report. 

---

## **Submissions**
1. Each team must submit a single report:  
   - **Page 1:** Clearly specify each member's contributions.  
   - **Page 2:** List all references used for the project.  
2. Submit the code implementation on Moodle.

## **Presentation**
After submission, each group will present a demo to the TA.  
- You must thoroughly understand every part of your code.  
- The TA will assess your understanding of each component and the rationale behind your implementation choices.  
- Missing the presentation will result in a **ZERO** grade for the group.  

## **Grading Criteria**
1. Presentation of all program features (60%)
3. Code readability and comments (20%)
4. Proper file handling and error management (20%)
5. If you simply copy paste without understanding, your group will receive **ZERO** grade. 
