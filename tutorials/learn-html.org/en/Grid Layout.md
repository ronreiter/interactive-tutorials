Tutorial
--------

The "Grid Layout" is a concept used for designing websites using HTML and CSS. The basic concept of a grid allows us to
build an HTML page by using rows as the basic blocks, and each row can be divided into up to 12 columns. 
 
You are welcome to contribute one by sending me a pull request:  
[[https://github.com/ronreiter/interactive-tutorials]]

Exercise
--------

You can practice exercises here. [[https://github.com/yusuf7861?tab=repositories]]

Tutorial Code
-------------
```bash
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Grid Layout tutorial</title>
    <style>
        * {
            box-sizing: border-box;
            padding: 0;
            margin: 0;
        }

        body {
            font-family: 'Open Sans',sans-serif;
            font-size: 16px;
            line-height: 1.5;
            color: #333;
            background: #f5f5f5;
        }

        .container{
            max-width: 960px;
            margin: 100px auto;
            padding: 10px;
            display: grid;
            grid-template-columns: repeat(3, 1fr);
            gap: 10px;
            


            /* column-gap: 10px;
            row-gap: 10px; */

            /* grid-auto-rows: minmax(200px, auto); */
            /* grid-template-rows: repeat(3, 1fr); */
        }

        .item {
            background: steelblue;
            color: #fff;
            font-size: 20px;
            padding: 20px;
            border: 2px solid skyblue;
        }
    </style>
</head>
<body>

    <div class="container">
        <div class="item">Lorem ipsum dolor sit amet consectetur, adipisicing elit. Iste, pariatur quis cum unde porro sequi, odit itaque officia </div>
        <div class="item">Item2</div>
        <div class="item">Item3</div>
        <div class="item">Lorem ipsum, dolor sit amet consectetur adipisicing elit. Omnis voluptatibus dolore qui natus nam voluptates, harum hic ipsa laudantium suscipit et itaque corrupti perferendis quaerat possimus, labore maxime odit ipsum!</div>
        <div class="item">Item5</div>
        <div class="item">Item6</div>
        <div class="item">Item7</div>
        <div class="item">Item8</div>
        <div class="item">Item9</div>
    </div>
    
</body>
</html>
```
  
Expected Output
---------------

![Grid Layout](https://i.postimg.cc/3RY1KmdH/Grid.jpg)

