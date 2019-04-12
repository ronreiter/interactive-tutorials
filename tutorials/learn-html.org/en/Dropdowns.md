Tutorial
--------

Use any element to open the dropdown content, i.e. a &lt;button&gt; element. Use a container element (like &lt;div&gt;) to create the dropdown navbar and add what you want inside of it. Wrap a &lt;div&gt; element around the elements to position the dropdown content correctly with CSS. Regarding CSS, The ".dropdown" class uses "position:relative;", which is needed for the content inside the dropdown to be placed right below the dropdown button (using position:absolute). The :hover selector is used to show the dropdown menu when the user moves the mouse over the dropdown button. The effect of ".dropdown" and others being a class is that it can be applied to other elements. In the context of dropdowns, one sensible use of this would be putting a dropdown inside of a list, to create a dropdown from a navbar.



Exercise
--------

Create a dropdown using the given code. Remember to place your dropdowns and classes inside &lt;div&gt; elements. The CSS is already written, so there is no need to change it.


Tutorial Code
-------------

&lt;!DOCTYPE html>  &lt;html>
&lt;head>
&lt;style>

.dropbtn {
  background-color: #4CAF50;
  color: white;
  padding: 16px;
  font-size: 16px;
  border: none;
  cursor: pointer;
}

.dropdown {
  position: relative;
  display: inline-block;
}
.dropdown-content {
  display: none;
  position: absolute;
  background-color: #f9f9f9;
  min-width: 160px;
  box-shadow: 0px 8px 16px 0px rgba(0,0,0,0.2);
  z-index: 1;
}

.dropdown-content a {
  color: black;
  padding: 12px 16px;
  text-decoration: none;
  display: block;
}

.dropdown-content a:hover {background-color: #f1f1f1}

.dropdown:hover .dropdown-content {
  display: block;
}

.dropdown:hover .dropbtn {
  background-color: #3e8e41;
}
&lt;/style>
&lt;/head>
&lt;body>





&lt;/body>
&lt;/html>

    
Expected Output
---------------

&lt;!DOCTYPE html>
&lt;html>
&lt;head>
&lt;style>
.dropbtn {
  background-color: lightblue;
  color: black;
  padding: 16px;
  font-size: 16px;
  border: none;
  cursor: pointer;
}

.dropdown {
  position: relative;
  display: inline-block;
}

.dropdown-content {
  display: none;
  position: absolute;
  background-color: #f9f9f9;
  min-width: 160px;
  box-shadow: 0px 8px 16px 0px rgba(0,0,0,0.2);
  z-index: 1;
}

.dropdown-content a {
  color: black;
  padding: 12px 16px;
  text-decoration: none;
  display: block;
}

.dropdown-content a:hover {background-color: yellow}

.dropdown:hover .dropdown-content {
  display: block;
}

.dropdown:hover .dropbtn {
  background-color: lightgreen;
}
&lt;/style>
&lt;/head>
&lt;body>


&lt;div class="dropdown">
 &lt;button class="dropbtn">Dropdown</button>
  &lt;div class="dropdown-content">
 &lt;a href="">Link 1</a>
  &lt;a href="">Link 2</a>
&lt;a href="">Link 3</a>
  &lt;/div>
&lt;/div>



&lt;/body>
&lt;/html>

Solution
--------

&lt;!DOCTYPE html>
&lt;html>
&lt;head>
&lt;style>
.dropbtn {
  background-color: lightblue;
  color: black;
  padding: 16px;
  font-size: 16px;
  border: none;
  cursor: pointer;
}

.dropdown {
  position: relative;
  display: inline-block;
}

.dropdown-content {
  display: none;
  position: absolute;
  background-color: #f9f9f9;
  min-width: 160px;
  box-shadow: 0px 8px 16px 0px rgba(0,0,0,0.2);
  z-index: 1;
}

.dropdown-content a {
  color: black;
  padding: 12px 16px;
  text-decoration: none;
  display: block;
}

.dropdown-content a:hover {background-color: yellow}

.dropdown:hover .dropdown-content {
  display: block;
}

.dropdown:hover .dropbtn {
  background-color: lightgreen;
}
&lt;/style>
&lt;/head>
&lt;body>


&lt;div class="dropdown">
  &lt;button class="dropbtn">Dropdown</button>
 &lt;div class="dropdown-content">
  &lt;a href="">Link 1</a>
  &lt;a href="">Link 2</a>
 &lt;a href="">Link 3</a>
  &lt;/div>
&lt;/div&gt;



&lt;/body>
&lt;/html>
